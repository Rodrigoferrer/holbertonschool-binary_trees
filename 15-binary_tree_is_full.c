#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to root
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int fulli, fulld;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	fulli = binary_tree_is_full(tree->left);
	fulld = binary_tree_is_full(tree->right);

	if (tree->left != NULL && tree->right != NULL)
		return (fulli && fulld);

	return (0);
}
