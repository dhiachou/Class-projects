/*
 * Students.cpp
 *
 *  Created on: Feb 26, 2014
 *  Last modif: Mar 04, 2014
 *      Author: dhia
 */
#include <fstream>
#include <iostream>
#include <cstdlib>
#include "Students.h"


/*Students::Students() {
	my_count = 0;
}

Students::Students(int count){
	my_students = new Student[count];
}

Students::Students(int count, Student* students){
	my_students = new Student[count];
	for (int i(0) ; i< count; i++){
		my_students[i] = students[i];
	}
}
*/
Students::Students(std::string file){
	//ouverture du fichier
	std::ifstream f_studentList(file.c_str());

	if(f_studentList){
		//determinaison du nombre d'étudiants = nombre de lignes dans le fichier
		int studentCount(0);
		std::string line;
		while (std::getline(f_studentList, line))
			studentCount++;

		//allocation dynamique du tableau d'étudiants
		my_students = new Student[studentCount];
		my_count = studentCount;

		/// Dirty hack - remettre le curseur au debut:
		f_studentList.close();
		f_studentList.open(file.c_str());

		//parsing du fichier
		int i(0);
		while (std::getline(f_studentList, line)){
			my_students[i].setName(line.substr(0,line.length()-1)); //length() -1 pour enlever le charactere de retour a la ligne
			i++;
		}
		f_studentList.close();
	}
	else{	//can't open file
		std::cout <<"Can't open file "<<file<<std::endl;
		exit(1);
	}
}

/**
 * retourne l'étudiant numéro i
 */
Student Students::getStudent(int i){
	if (i<my_count && i>=0){
		return my_students[i];
	}
	std::cout<<"error : there is no such a student "<<i<<std::endl;
	exit(-1);

}

/**
 * Suppression d'un étudiant (numero @param i )
 */

void Students::removeStudent(int i){
	if (i<my_count && i>=0){
		for (int j=i; j<my_count-1;j++){
			my_students[j] = my_students[j+1];
		}
		my_count--;
	}
}

Students::~Students() {
	delete[] my_students;
}

