#include"lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to the list_t
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
