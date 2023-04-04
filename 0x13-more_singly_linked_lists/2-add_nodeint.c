#include "lists.h"
/**
 *listint_t - function that adds a new node at the beginning of a linked list.
 *@head: head of a list
 *@n: n element
 *Return: the address of the new element, Null otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
