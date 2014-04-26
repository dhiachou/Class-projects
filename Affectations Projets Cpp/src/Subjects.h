/*
 * Subjects.h
 *
 *  Created on: Feb 26, 2014
 *      Author: dhia
 */

#ifndef SUBJECTS_H_
#define SUBJECTS_H_

#include "Subject.h"

class Subjects {
private:
	int my_count;
	Subject * my_subjects;

public:
/*	Subjects();
	Subjects(int count);
	Subjects(int count, Subject* subjects);
*///not needed now
		/** Constructeur a partir d'un fichier de description csv**/
	Subjects(std::string file );

	int getCount(){ return my_count;}
	Subject getSubject(int index);

	void removeSubject(int index);

	virtual ~Subjects();
};

#endif /* SUBJECTS_H_ */
