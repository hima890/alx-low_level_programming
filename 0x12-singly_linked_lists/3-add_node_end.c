#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
char *str_copy;
unsigned int str_len;
if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
str_len = 0;
while (str[str_len])
str_len++;
str_copy = strdup(str);
if (str_copy == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = str_copy;
new_node->len = str_len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
return (new_node);
}
