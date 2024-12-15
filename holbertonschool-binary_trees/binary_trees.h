#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stdio.h>

/* Binary Tree Structure */
typedef struct binary_tree_s
{
    int n;                         /* Node's value */
    struct binary_tree_s *parent;  /* Pointer to the parent node */
    struct binary_tree_s *left;    /* Pointer to the left child */
    struct binary_tree_s *right;   /* Pointer to the right child */
} binary_tree_t;

/* Function prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree); /* Assuming this function is available */
void binary_tree_free(binary_tree_t *tree); /* Function to free the tree (optional) */

#endif /* BINARY_TREES_H */

