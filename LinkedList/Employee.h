#pragma once
#include<iostream>
#include<string.h>
#include"Globals.h"

using namespace std;

class Employee
{
private:	
	int id;
	char firstName[stringLength];
	char lastName[stringLength];
	bool gender;
	int age;

public:
	Employee();
	~Employee();
	void putEmployee(int id, char* firstName, char* lastName, bool gender, int age);
	void displayEmployee();
	int getId();
	char* getFirstName();
	char* getLastName();
	bool getGender();
	int getAge();
};

