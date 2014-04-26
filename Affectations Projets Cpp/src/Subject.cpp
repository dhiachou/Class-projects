/*
 * Subject.cpp
 *
 *  Created on: Feb 26, 2014
 *      Author: dhia
 */

#include "Subject.h"

Subject::Subject() {
	my_name = "";
	my_mentor = "";
}

std::string Subject::toString(){
	return my_name +";"+ my_mentor;
}

Subject::~Subject() {
	// TODO Auto-generated destructor stub
}

