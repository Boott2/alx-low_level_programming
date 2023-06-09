#include"lists.h"

/**
 * add_node - adds a new node at the beginning of the list
 *
 * @head: double pointer to list_t
 * @str: the strings
 * Return: returns a pointer to the new string
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	(*head) = new;
	return (*head);
}
