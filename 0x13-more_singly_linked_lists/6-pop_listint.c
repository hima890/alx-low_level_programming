#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
*head = (*head)->next;
n = temp->n;
free(temp);

return (n);
}
