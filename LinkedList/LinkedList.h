#pragma once
#include"EmployeeBase.h"
#include"LinkedCell.h"

class LinkedList
{
private:	
	EmployeeBase* base;
	bool (*validator)(Employee&);
	int (*comparator)(Employee&, Employee&);
	LinkedCell* first;

public:
	LinkedList(EmployeeBase& base, bool(*validator)(Employee&), int(*comparator)(Employee&, Employee&));
	~LinkedList();
	void show();

private:
	void build();
};

