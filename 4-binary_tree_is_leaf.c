#include "binary_trees.h"

/*
 *  binary_tree_is_leaf : function that checks if a node is a leaf
 *  node : pointer to the node to check
 *  Return : 1 in case node is a leaf , 0 in case of NULL 
 *  author: Rodrigo Ferrer C24
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node->right == NULL && node->left == NULL)
                return (1);
        return (0);
        binary_tree_is_leaf(node);
}
