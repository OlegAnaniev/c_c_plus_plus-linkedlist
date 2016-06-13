#pragma once
#include"Employee.h"

class LinkedCell
{
public:
	Employee* value;
	LinkedCell* next;

public:
	LinkedCell();
	~LinkedCell();
};

