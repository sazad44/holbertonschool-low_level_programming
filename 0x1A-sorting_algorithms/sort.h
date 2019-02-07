#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
int swap(int *array, int i, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void q_sort(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void shell_sort(int *array, size_t size);
void shell_swap(int *array, size_t idx, size_t size, size_t intvl);
void cocktail_sort_list(listint_t **list);
void cocktail_node_swap(listint_t **curr, unsigned char mode);
void quick_sort_hoare(int *array, size_t size);
void q_sort_hoare(int *array, int low, int high, size_t size);
int partition_hoare(int *array, int low, int high, size_t size);

#endif
