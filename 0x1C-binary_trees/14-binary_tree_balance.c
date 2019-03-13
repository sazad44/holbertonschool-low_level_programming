#include "binary_trees.h"

/**
 * binary_tree_balance - finds the balance factor for a binary tree
 * @tree: a pointer to the root node of the binary tree
 * Return: integer defining balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hr = 0, hl = 0;
	if (!tree || (!tree->left && !tree->right))
		return (0);
	hr = binary_tree_balance(tree->right) + 1;
	hl = binary_tree_balance(tree->left) - 1;
	return (hl - hr + 1);
}
