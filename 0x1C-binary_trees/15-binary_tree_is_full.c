#include "binary_trees.h"

/**
 * binary_tree_is_full - checks to see if a binary tree is full
 * @tree: a pointer to the root node of a binary tree
 * Return: 1 or full and 0 for not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && !tree->right || !tree->left
}
