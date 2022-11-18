#include "binary_trees.h"


/**
 * depth_node - Measures the depth of a node in a binary tree
 * @tree: Pointer to node to measure depth
 *
 * Return: Depth of binary tree, 0 if NULL
 */
int depth_node(const binary_tree_t *tree)
{
	int dep = 0;

	while (tree->parent != NULL)
	{
		dep++;
		tree = tree->parent;
	}
	return (dep);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return:  pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *tmp;
	int depth1, depth2, dif;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second->parent || first == second)
		return ((binary_tree_t *)first);
	if (second == first->parent)
		return ((binary_tree_t *)second);

	depth1 = depth_node(first);
	depth2 = depth_node(second);


	if (depth1 >= depth2)
		tmp = first->parent;
	else
		tmp = second->parent;

	depth1 >= depth2 ? (dif = depth1 - depth2) : (dif = depth2 - depth1);

	while (dif != 0)
	{
		tmp = tmp->parent;
		dif--;
	}

	return (tmp);
}
