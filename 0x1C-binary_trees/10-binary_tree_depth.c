#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node in a binary tree
 * @tree: a pointer to the node to be calculated
 * Return: an unsigned integer representing the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || !tree->parent)
		return (0);
	for (; tree->parent; tree = tree->parent, depth++)
		;
	return (depth);
}
