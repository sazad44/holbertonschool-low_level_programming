#include "binary_trees.h"

/**
 * binary_tree_is_root - checks to see if node is root
 * @node: pointer to node to check for root
 * Return: 1 for root and 0 for not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	else
		return (1);
}
