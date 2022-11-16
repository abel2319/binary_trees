#include "binary_tree.h"


/**
 * binary_tree_is_root - 
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
		if ((node->left != NULL) || (node->right != NULL))
			return (1);
	return (0);
}