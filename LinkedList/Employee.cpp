#include "Employee.h"


Employee::Employee()
{
}


Employee::~Employee()
{
}


void Employee::putEmployee(int id, char* firstName, char* lastName, bool gender, int age)
{
	this->id = id;
	strcpy(this->firstName, firstName);
	strcpy(this->lastName, lastName);
	this->gender = gender;
	this->age = age;
}


void Employee::displayEmployee()
{
	printf("%-5i %-15s %-15s %1i %2i \n", id, firstName, lastName, gender, age);
}


int Employee::getId()
{
	return id;
}


char* Employee::getFirstName()
{
	return firstName;
}


char* Employee::getLastName()
{
	return lastName;
}


bool Employee::getGender()
{
	return gender;
}


int Employee::getAge()
{
	return age;
}