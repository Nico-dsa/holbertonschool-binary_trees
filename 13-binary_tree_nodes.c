#include "binary_trees.h"

/**
  * size_t binary_tree_nodes - fun that counts the nodes with at least 1 child
  * @tree: a pointer to the root node of the tree to count the number of nodes
  *
  * Return: Nothing
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (1 + binary_tree_nodes(tree->right));

	else if (tree->left != NULL && tree->right == NULL)
		return (1 + binary_tree_nodes(tree->left));
	else if (tree->left != NULL && tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}
