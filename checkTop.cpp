#include "Header.h"

int stack::checktop()
{
	if (head!=NULL)
	{
		return head->data;
	}
	else
	{
		return -1;
	}
}