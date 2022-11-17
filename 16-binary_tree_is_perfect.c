#include "binary_tree.h"

/**
 * depth - find the depth of the tree
 * @tree: pointer to the root
 *
 * Return: the depth of tree
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect - verify each node
 * @tree: pointer to the node of the tree
 * @d: depht of tree
 * @level: level of node
 *
 * Return: 1 if tree is perfect
 * 0 if not
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (d == level + 1)
			return (1);
		return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return ((is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1)) ? 1 : 0);
}

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect
 * 0 otherwize
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

	return (is_perfect(tree, d, 0));
}
