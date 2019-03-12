#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse tree in preorder method
 * @tree: a pointer to the root node of the tree
 * @func: a function pointer to a func to call at each node
 * Return: No Value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
