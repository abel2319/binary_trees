#include "binary_tree.h"


/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t node = NULL;

	if (parent != NULL)
	{
		node = binary_tree_node(parent, value);
		if (node != NULL)
		{
			node->left = parent->left;
			parent->left = node;
			return (node);
		}
	}

	return (NULL);
}
