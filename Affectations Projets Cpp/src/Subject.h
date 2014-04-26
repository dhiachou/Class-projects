/*
 * Subject.h
 *
 *  Created on: Feb 26, 2014
 *      Author: dhia
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <iostream>

class Subject {
private:
	std::string my_name;
	std::string my_mentor;
public:
	Subject();
	Subject(std::string name, std::string mentor): my_name(name), my_mentor(mentor){ }

	std::string toString();

	void setMentor(std::string mentor) {
		my_mentor = mentor;
	}

	void setName(std::string name) {
		my_name = name;
	}

	virtual ~Subject();
};

#endif /* SUBJECT_H_ */
