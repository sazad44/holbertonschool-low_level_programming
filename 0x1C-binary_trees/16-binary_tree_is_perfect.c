#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root nodeo of the tree
 * Return: 1 for perfect and 0 for not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (!tree)
		return (0);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		l = tree->left;
		r = tree->right;
		if (!l && !r)
			return (1);
		return (binary_tree_is_perfect(l) && binary_tree_is_perfect(r));

	}
	return (0);
}

/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: a pointer to the root node of a binary tree
 * Return: an unsigned integer indicating height of tree
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
