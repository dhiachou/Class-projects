/*
 * Students.h
 *
 *  Created on: Feb 26, 2014
 *      Author: dhia
 */

#ifndef STUDENTS_H_
#define STUDENTS_H_

#include "Student.h"

class Students {
private:
	int my_count;
	Student * my_students;

public:
/*	Students();
	Students(int count);
	Students(int count, Student* students);
*///not needed now

	/** Constructeur a partir d'un fichier de description csv**/
	Students(std::string file );

	int getCount() { return my_count; }
	Student getStudent(int i);
	void removeStudent(int i);


	virtual ~Students();
};

#endif /* STUDENTS_H_ */
