#include "binary_trees.h"


/**
 * t_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of tree, 0 if NULL
 */
size_t t_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = tree->left ? 1 + t_height(tree->left) : 0;
	r = tree->right ? 1 + t_height(tree->right) : 0;
	return (l > r ? l : r);
}

/**
 * print_level - Visit all nodes of a given level in a binary tree
 * @tree: pointer to root of tree
 * @level: tree level
 * @func: print
 *
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);
	else
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}
	
/**
 * binary_tree_inorder - function that goes through a
 * binary tree using in-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 *
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h, i;

	if (tree != NULL && func != NULL)
	{
		h = t_height(tree) + 2;

		for (i = 0; i < h; i++)
			print_level(tree, i, func);
	}
}
