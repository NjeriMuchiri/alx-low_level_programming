#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct s_listint - the singly linked list
 * @n: integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * Description: Singly linked list node structure
*/
typedef struct s_listint
{
    int n;
    size_t index;
    struct s_listint *next;
} t_listint;

    /**
     * struct s_listing- Singly linked list with an express lane
     *
     * @n: Integer
     * @index: Index of the node in the list
     * @next: Pointer to the next node
     * @express: Pointer to the next node in the express lane
     *
     * Description: singly linked list node structure with an express lane
     */
typedef struct s_listing
{
    int n;
    size_t index;
    struct s_listing *next;
    struct s_listing *express;
}listing_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
t_listint *jump_list(t_listint *list, size_t size, int value);
listing_t *linear_skip(listing_t *list, int value);

#endif
