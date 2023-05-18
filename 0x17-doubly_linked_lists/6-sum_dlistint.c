#include "lists.h"
/**
 * sum__dlistint - returns the sum of all the data
 * of a dlistint_t
 * @head: head of the linked list
 * Return: sum of the data else return 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
