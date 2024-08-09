#include "binary_trees.h"

/*
 *binary_tree_height : function that measures the height of a binary tree
 *@tree : is a pointer to the root node of the tree to measure the height
 *Return: 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter_left = 0;
	size_t counter_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		counter_left = 1 + binary_tree_height(tree->left);
	}
	 if (tree->right)
        {
                counter_right = 1 + binary_tree_height(tree->right);
        }
	 if (counter_left > counter_right)
	{
		 return (counter_left);
	}
	return (counter_right);
}

