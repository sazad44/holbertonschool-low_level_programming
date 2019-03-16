#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a binary tree right by a certain node
 * @tree: a pointer to the node to be rotated
 * Return: a pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmpRoot = NULL;

	if (!tree || !tree->left)
		return (tree);
	tmpRoot = tree;
	tree = tree->left;
	if (!tree->right)
	{
		tmpRoot->left = NULL;
	}
	else
	{
		tmpRoot->left = tree->right;
		tree->right->parent = tmpRoot;
	}
	tree->right = tmpRoot;
	tmpRoot->parent = tree;
	tree->parent = NULL;
	return (tree);
}
