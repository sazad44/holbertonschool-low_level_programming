#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf or not
 * @node: the node to be checked for leaf property
 * Return: 1 if leaf and 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	else
		return (1);
}
