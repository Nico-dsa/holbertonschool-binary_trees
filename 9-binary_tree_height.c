#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);
	
	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);

	if (r > l)
		return (r + 1);
	else
		return (l + 1);
}
