#include "binary_trees.h"

/**
 * binary_tree_height - function thqt measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: Nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (tree == NULL)
		return (0);

	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);

	if (r > l)
		return (r + 1);
	else
		return (l + 1);
}

/**
 * binary_tree_balance - func that measures the balance factor of a bin tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: Nothing
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	return (l - r);
}
