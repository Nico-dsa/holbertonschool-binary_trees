#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent)
	{
		node = node->parent;

		if (node->parent == NULL)
			return (NULL);
		if (node->parent->right == node)
			return (node->parent->left);
		if (node->parent->left == node)
			return (node->parent->right);
	}
	return (NULL);
}
