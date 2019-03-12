#include "binary_trees.h"

/**
 * binary_tree_size - calculate the size of a binary tree
 * @tree: a pointer to the root node of a binary tree
 * Return: an unsigned integer representing the size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((binary_tree_size(tree->left)) + binary_tree_size(tree->right) + 1);
}
