#include "binary_tree.h"


/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 *
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);

	return (node->parent->parent->right);
}
