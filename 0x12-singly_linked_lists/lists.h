#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to structure
 *
 * Return: size_t
 */

size_t print_list(const list_t *h);

/**
 * list_len - Counts the number of elements in a linked list
 * @h: pointer to list_t struct 
 *
 * Return: size_t
 */

size_t list_len(const list_t *h);

/**
 * add_node - adds a new node at the beginning of
 *  a list_t list
 *  @head: pointer to pointer to struct
 *  @str: pointer to char
 *
 *  Return: list_t
 */

list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - adds a node to the end of a list_t list
 * @head: pointer to pointer to list_t
 * @str: pointer to char
 *
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str);
#endif
