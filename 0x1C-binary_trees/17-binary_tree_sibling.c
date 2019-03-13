#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling node of a node
 * @node: pointer to the node to find the sibling of
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmpNode = NULL;

	if (!node || !(node->parent))
		return (NULL);
	tmpNode = node->parent;
	if (tmpNode->left == node)
		return (tmpNode->right);
	else
		return (tmpNode->left);
}
