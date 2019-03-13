#include "binary_trees.h"

/**
 * binary_tree_is_full - checks to see if a binary tree is full
 * @tree: a pointer to the root node of a binary tree
 * Return: 1 or full and 0 for not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree && ((tree->left && tree->right) || (!tree->left && !tree->right)))
	{
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
	}
	else
		return (0);
	return (1);
}
