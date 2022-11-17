#include "binary_trees.h"


/**
 * binary_tree_node - unction that creates a binary tree node
 * @parent: the parent of the node
 * @value: the value of the node
 *
 * Return: the pointer on the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new != NULL)
	{
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
	}

	return (new);
}
