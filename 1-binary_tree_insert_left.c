#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a left node
 * @parent: Pointer to parent
 * @value: integer
 * Return: Adress of left node, or NULL if fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (parent->left == NULL)
	{
		binary_tree_t *new_node;

		new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		parent->left = new_node;
		return (new_node);
	}
	else
		return (NULL);
}
