#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks to see if binary tree is complete
 * @tree: a pointer to the root node of a binary tree
 * Return: 1 for complete and 0 for incomplete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t tHl = 0, tHr = 0;

	if (!tree)
		return (0);
	tHl = binary_tree_height(tree->left);
	tHr = binary_tree_height(tree->right);
	if (tHl == tHr || tHl == (tHr - 1) || tHl == (tHr + 1))
	{
		if (!tree->left && tree->right)
			return (0);
		else
			return (1);
		binary_tree_is_complete(tree->left);
		binary_tree_is_complete(tree->right);
	}
	return (0);
}

/**
 * binary_tree_height - get height of binary tree
 * @tree: a pointer to the root node of the binary tree
 * Return: an unsigned integer of the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);
	binary_tree_height(tree->left);
	binary_tree_height(tree->right);
	if (hl > hr)
		return (hl + 1);
	else
		return (hr + 1);
}
