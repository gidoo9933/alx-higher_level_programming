#include "lists.h"

/**
* insert_node - function that Inserts a number into a sorted singly-linked list.
* @head: A pointer to the head of the linked list.
* @number: The number to be inserted.
*
* Return: on failure - NULL.
* Otherwise - a pointer to the new thus first node.
*/
listint_t *insert_node(listint_t **head, int number)
{
listint_t *node = *head, *first;


first = malloc(sizeof(listint_t));
if (first == NULL)
return (NULL);
first->n = number;


if (node == NULL || node->n >= number)
{
first->next = node;
*head = first;
return (first);
}


while (node && node->next && node->next->n < number)
node = node->next;


first->next = node->next;
node->next = first;


return (new);
}
