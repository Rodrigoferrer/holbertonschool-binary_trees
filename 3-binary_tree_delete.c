#include "binary_trees.h"

/*
 * binary_tree_delete : Function that deletes a binary tree
 * @tree : pointer to the begining of the tree
 * Return : void
 * author : Rodrigo Ferrer C24
 * */


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	}
	else if (tree == NULL)
	{
	}
}
