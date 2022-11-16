#include "binary_tree.h"


/**
 * binary_tree_leaves - 
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves
 * If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	number = binary_tree_leaves(tree->left);
	number += binary_tree_leaves(tree->right);

	return (number);
}
