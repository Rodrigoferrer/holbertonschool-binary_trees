#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that counts the amount of leaves
 * @tree: Pointer to tree
 * Return: The amount of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		leaf++;
	leaf += binary_tree_leaves(tree->left);
	leaf += binary_tree_leaves(tree->right);
	return (leaf);
}
