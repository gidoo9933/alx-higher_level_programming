#include "lists.h"


/**
* check_cycle - use to check if a linked list contains a cycle
* @list: the linked list to check
*
* Return: 1 if the list has a cycle, and 0 otherwise
*/
int check_cycle(listint_t *list)
{
	listint_t *one = list;
	listint_t *two = list;


	if (!list)
		return (0);


	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		return (1);
	}


	return (0);
}
