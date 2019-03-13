#include "binary_trees.h"

/**
 * binary_tree_balance - finds the balance factor for a binary tree
 * @tree: a pointer to the root node of the binary tree
 * Return: integer defining balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - find height of a binary tree
 * @tree: a pointer to the root node of a binary tree
 * Return: unsigned integer representing height of
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);
	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);
	if (hl > hr)
		return (hl + 1);
	else
		return (hr + 1);
}
