#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: a pointer to the node to find the uncle of
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmpNode = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	tmpNode = node->parent->parent;
	if (tmpNode->left == node->parent)
		return (tmpNode->right);
	else
		return (tmpNode->left);
}
