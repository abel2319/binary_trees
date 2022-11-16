#include "binary_tree.h"


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 * 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree ==NULL)
		return (0);
	left = binary_tree(tree->left);
	right = binary_tree(tree->right);
	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
}
