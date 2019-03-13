#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: an unsigned integer that reflects the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0, a = 1;

	if (!tree)
		return (0);
	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);
	if (!tree->left && !tree->right)
		a = 0;
	if (hl > hr)
		return (hl + a);
	else
		return (hr + a);
}
