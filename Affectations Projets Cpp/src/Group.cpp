/*
 * Group.cpp
 *
 *  Created on: Feb 26, 2014
 *      Author: dhia
 */

#include "Group.h"

Group::Group() {

}

void Group::setSubject(Subject subject){
	my_subject = subject;
}
void Group::setStudent(int student_number,Student student){
	if (student_number==1||student_number==0){
		my_students[student_number] = student;
	}
}


std::string Group::toString(){
	return my_students[0].toString() +" | "+my_students[1].toString()+";"+my_subject.toString();
}

Group::~Group() {
}

