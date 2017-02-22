#pragma once
#include <string>
using namespace std;
class Student
{
private: 
	string _name;

public:
	//void SetName(std::stringName)
	Student(std::string name);
	~Student();

	std::string GetName();
};

