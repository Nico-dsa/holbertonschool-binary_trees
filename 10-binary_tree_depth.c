#include "binary_trees.h"

/**
 * binary_tree_depth - func that measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: Nothing
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		x++;
	}
	return (x);
}
