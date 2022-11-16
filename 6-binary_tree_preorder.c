#include "binary_tree.h"

/**
 * binary_tree_preorder - function that goes through a
 * binary tree using pre-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		printf("%d", tree->value);
		binary_tree_preorder(tree->left);
		binary_tree_preorder(tree->right);
	}
	return;
}