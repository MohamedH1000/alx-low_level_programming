#ifndef _SORTING_ALGORITHM_H_
#define _SORTING_ALGORITHM_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - A LIST OF SINGLY LINED
 * @n: an intger
 * @index: node of the list index
 * @next: next node pointer
 * Description: node structure of singly linked list
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - an express lane with this singly linked list
 * @n: an integer
 * @index: node in the list index
 * @next: next node pointer
 * @express: next node in the express lane pointer
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
