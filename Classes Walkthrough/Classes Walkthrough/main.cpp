#include "Student.h"
#include <iostream>
#include "Teacher.h"
#include "Course.h"

using namespace std;

int main()

{

	Teacher james = Teacher("james");
	Course cis17 = Course("CIS17A", "Programming C++: Objects", james);
	Student jane = Student("jane");
	Student bob = Student("bob");
	
	cis17.EnrollStudent(bob, 0);
	cis17.EnrollStudent(jane, 1);

	getchar();
	return 0;
}