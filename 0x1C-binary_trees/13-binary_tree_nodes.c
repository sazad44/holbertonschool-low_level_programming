#include "binary_trees.h"

/**
 * binary_tree_nodes - counts number of nodes in a binary tree
 * @tree: a pointer to the root node of a binary tree
 * Return: an unsigned integer representing the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a = 0;

	if (!tree)
		return (0);
	if (!(!tree->left && !tree->right))
		a = 1;
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + a);
}
