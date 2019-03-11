#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the node
 * Return: a pointer to the node created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *retNode = NULL;

	retNode = malloc(sizeof(binary_tree_t));
	if (!retNode)
		return (retNode);
	retNode->n = value;
	retNode->left = NULL;
	retNode->right = NULL;
	if (parent && !(parent->left))
	{
		retNode->parent = parent;
		parent->left = retNode;
	}
	else if (parent && !(parent->right))
	{
		retNode->parent = parent;
		parent->right = retNode;
	}
	return (retNode);
}
