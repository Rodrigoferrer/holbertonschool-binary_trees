#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a left node
 * @parent: Pointer to parent
 * @value: integer
 * Return: Adress of left node, or NULL if fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	parent->left = new_node;
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	else
		parent->left = new_node;
	return (new_node);
}
