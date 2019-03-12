#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses binary tree with inorder method
 * @tree: pointer to root node of binary tree
 * @func: pointer to function to be executed at every node
 * Return: No Value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
