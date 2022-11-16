#include "binary_tree.h"


/**
 *
 *
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t tmp = tree;

	if (tree != NULL)
	{
		tmp = tree->parent
		while (tmp)
		{
			depth++;
			tree = tree->parent;
		}
	}
	return (depth);
	
}
