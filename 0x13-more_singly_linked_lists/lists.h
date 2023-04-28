#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#ifndef LISTS_H_INCLUDED
#define LISTS_H_INCLUDED

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/** size_t print_listint - prints all the elements of a listint_t list
 * @h pointer to the first node
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h);
#endif
