#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: Nothing
 */

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

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: Nothing
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int r, l;

	if (tree == NULL)
		return (0);

	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);

	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right == NULL || tree->left == NULL)
		return (0);
	if (l != r)
		return (0);
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
