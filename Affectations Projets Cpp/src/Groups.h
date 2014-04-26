/*
 * Groups.h
 *
 *  Created on: Mar 2, 2014
 *      Author: dhia
 */

#ifndef GROUPS_H_
#define GROUPS_H_

#include "Group.h"
#include "Students.h"
#include "Subjects.h"
#include <cstdlib>
#include <time.h>

class Groups {
private:
	int my_count;
	Group* my_groups;

public:
	Groups(Students & students, Subjects & subjects);

	void writeToFile(std::string filename);
	int getCount(){ return my_count; }

	virtual ~Groups();
};

#endif /* GROUPS_H_ */
