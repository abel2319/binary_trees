#include "binary_trees.h"


/**
 * binary_tree_depth - find the depth of a tree
 * @tree: pointer to the root of the tree
 *
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *tmp = tree;

	if (tree != NULL)
	{
		tmp = tree->parent;
		while (tmp)
		{
			depth++;
			tree = tree->parent;
		}
	}
	return (depth);
}
