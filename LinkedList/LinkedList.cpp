#include "LinkedList.h"


LinkedList::LinkedList(EmployeeBase& base, bool(*validator)(Employee&), int(*comparator)(Employee&, Employee&))
{
	this->base = &base;
	this->validator = validator;
	this->comparator = comparator;
	this->first = NULL;	
	build();
}


LinkedList::~LinkedList()
{
	LinkedCell* temp = first;

	while (first)
	{
		first = first->next;
		delete temp;
		temp = first;
	}
}


void LinkedList::show()
{
	LinkedCell* temp = first;

	while (temp)
	{
		temp->value->displayEmployee();
		temp = temp->next;
	}
}


void LinkedList::build()
{
	int counter = base->getCounter();

	for (int i = 0; i < counter; i++)
	{
		if (validator(base->getEmployee(i)))
		{						
			LinkedCell* newItem = new LinkedCell;
			newItem->value = &base->getEmployee(i);

			if (!first)
			{
				first = newItem;
				newItem->next = NULL;
			}
			else
			{
				LinkedCell* temp = first;
				LinkedCell* previous;
				do
				{
					if (comparator(*newItem->value, *temp->value) == 1)
					{
						if (temp == first)
						{
							first = newItem;
							newItem->next = temp;
							
						}
						else
						{
							newItem->next = temp;
							previous->next = newItem;
						}						

						break;
					}
					else if (!temp->next)
					{
						temp->next = newItem;
						newItem->next = NULL;
						break;
					}

					previous = temp;
					temp = temp->next;

				} while (temp);
			}		
		}
	}
}