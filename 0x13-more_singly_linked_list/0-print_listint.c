#include "lists.h"

[2;2R[3;1R[>77;30502;0c]10;rgb:bfbf/bfbf/bfbf]11;rgb:0000/0000/0000/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
