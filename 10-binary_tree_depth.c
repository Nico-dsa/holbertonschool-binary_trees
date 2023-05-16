#include "binary_trees.h"

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
