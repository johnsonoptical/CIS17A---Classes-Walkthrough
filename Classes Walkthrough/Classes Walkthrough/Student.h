#pragma once
#include <string>
using namespace std;
class Student
{
private: 
	string _name;

public:
	Student();
	Student(std::string name);
	~Student();

	std::string GetName();
};

