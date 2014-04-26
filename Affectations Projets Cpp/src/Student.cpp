/*
 * Student.cpp
 *
 *  Created on: Feb 26, 2014
 *  Last modif: Mar 04, 2014
 *      Author: dhia
 */

#include "Student.h"

Student::Student() {
	my_name = "";
}

std::string Student::toString(){
	return my_name;
}

void Student::setName(std::string name){
	my_name= name;
}


Student::~Student() {
	// TODO Auto-generated destructor stub
}

