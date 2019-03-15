#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a binary tree left by a certain node
 * @tree: a pointer to the node to be rotated
 * Return: a pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmpRoot = NULL;

	if (!tree)
		return (tree);
	tmpRoot = tree;
	tree = tree->right;
	if (!tree->left)
	{
		tree->left = tmpRoot;
		tmpRoot->right = NULL;
	}
	else
	{
		if (!tmpRoot->left)
			tmpRoot->left = tree->left;
		else
			tmpRoot->right = tree->left;
		tree->left = tmpRoot;
	}
	tmpRoot->parent = tree;
	tree->parent = NULL;
	return (tree);
}
