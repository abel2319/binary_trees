#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of tree, 0 if NULL
 */
size_t _height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = tree->left ? 1 + _height(tree->left) : 0;
	r = tree->right ? 1 + _height(tree->right) : 0;
	return (l > r ? l : r);
}

/**
 * visit_level - Visit all nodes of a given level in a binary tree
 * @tree: Pointer to root of tree
 * @level: Tree level
 * @func: Visiting function
 *
 * Return: N/A
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
		h = _height(tree) + 2;

		for (i = 0; i < h; i++)
		{
			print_level(tree, i, func);
		}
	}
}
