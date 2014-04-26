/*
 * Group.h
 *
 *  Created on: Feb 26, 2014
 *      Author: dhia
 */

#ifndef GROUP_H_
#define GROUP_H_

#include "Student.h"
#include "Subject.h"

class Group {
private:
	Student  my_students [2];
	Subject my_subject;

public:
	Group();

	void setSubject(Subject subject);
	void setStudent(int student_number,Student student);

	std::string toString();

	virtual ~Group();
};

#endif /* GROUP_H_ */
