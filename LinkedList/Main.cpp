#include"EmployeeBase.h"
#include"LinkedList.h"


bool validatorAll(Employee&);
bool validatorMale(Employee&);
bool validatorFemale(Employee&);


int comparatorAgeAscending(Employee& newItem, Employee& listMember);
int comparatorAgeDescending(Employee& newItem, Employee& listMember);
int comparatorFirstNameAscending(Employee& newItem, Employee& listMember);
int comparatorFirstNameDescending(Employee& newItem, Employee& listMember);

void main()
{
	EmployeeBase base;
	base.display();

	cout << "<------>" << endl;


	LinkedList maleAgeAcs(base, validatorMale, comparatorAgeAscending);
	maleAgeAcs.show();

	cout << "<------>" << endl;

	LinkedList maleAgeDecs(base, validatorMale, comparatorAgeDescending);
	maleAgeDecs.show();

	cout << "<------>" << endl;
	LinkedList allAgeDecs(base, validatorAll, comparatorAgeDescending);
	allAgeDecs.show();

	cout << "<------>" << endl;
	LinkedList allFirstNameDecs(base, validatorAll, comparatorFirstNameDescending);
	allFirstNameDecs.show();

	cout << "<------>" << endl;
	LinkedList maleFirstNameAcs(base, validatorAll, comparatorFirstNameAscending);
	maleFirstNameAcs.show();

	system("Pause");
}


bool validatorAll(Employee&)
{
	return true;
}


bool validatorMale(Employee& empl)
{	
	return empl.getGender() == 1 ? true : false;
}


bool validatorFemale(Employee& empl)
{
	return empl.getGender() == 1 ? false : true;
}


int comparatorAgeAscending(Employee& newItem, Employee& listMember)
{
	return newItem.getAge() < listMember.getAge() ? 1 : 0;
}


int comparatorAgeDescending(Employee& newItem, Employee& listMember)
{
	return newItem.getAge() < listMember.getAge() ? 0 : 1;
}


int comparatorFirstNameAscending(Employee& newItem, Employee& listMember)
{
	char* newItemFirstName = newItem.getFirstName();
	char* listMemberFirstName = listMember.getFirstName();

	while (*newItemFirstName && *listMemberFirstName)
	{
		if (*newItemFirstName < *listMemberFirstName)
		{
			return 1;
		}

		if (*newItemFirstName > *listMemberFirstName)
		{
			return 0;
		}

		newItemFirstName++;
		listMemberFirstName++;
	}

	return 1;
}


int comparatorFirstNameDescending(Employee& newItem, Employee& listMember)
{
	char* newItemFirstName = newItem.getFirstName();
	char* listMemberFirstName = listMember.getFirstName();

	while (*newItemFirstName && *listMemberFirstName)
	{
		if (*newItemFirstName < *listMemberFirstName)
		{
			return 0;
		}

		if (*newItemFirstName > *listMemberFirstName)
		{
			return 1;
		}

		newItemFirstName++;
		listMemberFirstName++;
	}
	
	return 1;
}