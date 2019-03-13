#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: an unsigned integer that reflects the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;
	if (!tree || (!tree->left && !tree->right))
		return (0);
	hl = binary_tree_height(tree->left) + 1;
	hr = binary_tree_height(tree->right) + 1;
	if (hl > hr)
		return hl;
	else
		return hr;
}
