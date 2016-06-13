#include "EmployeeBase.h"


EmployeeBase::EmployeeBase()
{
	base = new Employee[baseStartSize];
	FILE* file;

	int tempId;
	char tempFirstName[stringLength];
	char tempLastName[stringLength];
	int tempGender;
	int tempAge;

	file = fopen("employeebase.txt", "r");

	fscanf(file, "%i", &counter);

	for (int i = 0; i < counter; i++)
	{
		fscanf(file, "%i %s %s %i %i", &tempId, tempFirstName, tempLastName, &tempGender, &tempAge);
		base[i].putEmployee(tempId, tempFirstName, tempLastName, (bool)tempGender, tempAge);
	}

	fclose(file);
}


EmployeeBase::~EmployeeBase()
{
	delete[] base;
}


void EmployeeBase::display()
{
	for (int i = 0; i < counter; i++)
	{
		base[i].displayEmployee();
	}
}


Employee& EmployeeBase::getEmployee(int key)
{
	return base[key];
}


int EmployeeBase::getCounter()
{
	return counter;
}