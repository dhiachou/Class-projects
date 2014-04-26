/*
 * Subjects.cpp
 *
 *  Created on: Feb 26, 2014
 *      Author: dhia
 */

#include <fstream>
#include <iostream>
#include <cstdlib>
#include "Subjects.h"


/*Subjects::Subjects() {
	my_count = 0;
}

Subjects::Subjects(int count){
	my_subjects = new Subject[count];
}

Subjects::Subjects(int count, Subject* subjects){
	my_subjects = new Subject[count];
	for (int i(0) ; i< count; i++){
		my_subjects[i] = subjects[i];
	}
}
*/

Subject Subjects::getSubject(int i){
	if (i<my_count && i>=0){
		return my_subjects[i];
	}
	std::cout<<"Error : there is no such a subject "<<i<<std::endl;
	exit(-1);

}

void Subjects::removeSubject(int i){
	if (i<my_count && i>=0){
		for (int j=i; j<my_count-1;j++){
			my_subjects[j] = my_subjects[j+1];
		}
		my_count--;
	}
}

Subjects::Subjects(std::string file){
	std::ifstream f_subjectList(file.c_str());
	if(f_subjectList){
		//determinaison du nombre de sujets = nombre de lignes dans le fichier
		int subjectCount(0);
		std::string line;
		while (std::getline(f_subjectList, line))
			subjectCount++;

        //reinitializer le curseur au debut
        f_subjectList.close();
        f_subjectList.open(file.c_str());

		//allocation dynamique du tableau d'étudiants
		my_subjects = new Subject[subjectCount];
		my_count = subjectCount;

		//parsing du fichier
		int i(0);
		while (std::getline(f_subjectList, line)){
			my_subjects[i].setMentor(line.substr(0,line.find(';',0)));
			line.erase(0,line.find(';',0));
			my_subjects[i].setName(line);
			i++;
		}

		f_subjectList.close();

	}
	else{
		std::cout<<"Can't load file "<<file<<std::endl;
		exit(1);
	}
}

Subjects::~Subjects() {
    delete[] my_subjects;
}

