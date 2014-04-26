/*
 * Student.h
 *
 *  Created on: Feb 26, 2014
 *  Last modif: Mar 04, 2014
 *      Author: Dhia Eddine Chouchane
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>

class Student {
private:
	std::string my_name;

public:
	Student();
	Student(std::string name) : my_name(name) {	}

	std::string toString();

	void setName(std::string name);

	virtual ~Student();
};

#endif /* STUDENT_H_ */
