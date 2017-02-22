#include "Student.h"
#include <iostream>
#include "Teacher.h"

using namespace std;

int main()

{
	Student bob = Student("bob");
	cout << bob.GetName() << endl;

	Teacher james = Teacher("james");
	cout << james.GetName() << endl;

	getchar();
	return 0;
}