#pragma once
#include<iostream>
#include"Employee.h"

class EmployeeBase
{
private:
	Employee* base;
	int counter = 0;

public:
	EmployeeBase();
	~EmployeeBase();
	void display();
	Employee& getEmployee(int);
	int getCounter();
};

