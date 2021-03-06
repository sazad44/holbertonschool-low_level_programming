#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a binary tree left by a certain node
 * @tree: a pointer to the node to be rotated
 * Return: a pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmpRoot = NULL;

	if (!tree || !tree->right)
		return (tree);
	tmpRoot = tree;
	tree = tree->right;
	if (!tree->left)
	{
		tmpRoot->right = NULL;
	}
	else
	{
		tmpRoot->right = tree->left;
		tree->left->parent = tmpRoot;
	}
	tree->left = tmpRoot;
	tmpRoot->parent = tree;
	tree->parent = NULL;
	return (tree);
}
