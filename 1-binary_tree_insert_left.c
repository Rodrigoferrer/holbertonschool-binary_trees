#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_t : function that inserts a node as the left-child of another node
 * @parent : pointer to the node to insert the left child in
 * @value is the value to store in the new node
 * Return : a pointer to the created node or NULL on failure or if parent is NULL
 * Author : Rodrigo Ferrer / C24
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
    	{
        	return NULL;
    	}
	if (parent->right == NULL)
	{
                return 0;
        }
    	new_node->parent = parent;
	new_node->n = value;
	parent->left = new_node;
	parent->right = NULL; 
		return new_node;
}
