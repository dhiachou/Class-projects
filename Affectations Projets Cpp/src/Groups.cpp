/*
 * Groups.cpp
 *
 *  Created on: Mar 2, 2014
 *  Last modif: Mar 4, 2014
 *      Author: dhia
 */

#include <fstream>
#include <iostream>

#include "Groups.h"


/*Groups::Groups() {
	my_count=0;
}
*/

Groups::Groups(Students & students, Subjects & subjects){
	srand(time(NULL));
	my_count = students.getCount()/2;
	my_groups = new Group[my_count];	//allocation dynamique de la mémoire

	for (int i(0);i<my_count;i++){
		int j(0);
		//affecter le premier etudiant  ///segfault here ! - found and fixed.
		j = rand() % students.getCount() ; //avoir un nombre j au hazard inclus entre 0 et nombre d'étudiants-1
		my_groups[i].setStudent(0, students.getStudent(j));
		students.removeStudent(j);  //enlever cet etudiant de la liste d'étudiants

		//affecter le second etudiant
		j= rand()%students.getCount() ; //avoir un nombre j au hazard inclus entre 0 et nombre d'étudiants-1
		my_groups[i].setStudent(1, students.getStudent(j));
		students.removeStudent(j);

		//affecter le sujets
		j=rand()%subjects.getCount();
		my_groups[i].setSubject(subjects.getSubject(j));
		subjects.removeSubject(j);

	}
}

void Groups::writeToFile(std::string filename){
	std::ofstream f_output(filename.c_str());
	if (f_output){
		f_output<<"équipe;Sujet;Encadrant"<<std::endl;
		//on peut ouvrir le fichier en ecriture
		for (int i(0); i<my_count;i++){
			f_output<<my_groups[i].toString() << std::endl;
		}
	}
	else{
		std::cout<<"Error, impossible de creer le fichier"<<filename<<std::endl;
		exit (1);
	}

}

Groups::~Groups() {
	delete [](my_groups);
}

