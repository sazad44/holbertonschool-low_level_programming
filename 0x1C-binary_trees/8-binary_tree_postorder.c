#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses binary tree with postorder method
 * @tree: a pointer to the root node of the binary tree
 * @func: a function pointer to a function that takes in an integer
 * Return: No Value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
