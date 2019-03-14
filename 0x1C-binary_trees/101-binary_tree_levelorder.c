#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverses binary tree in level order
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to function to be used at each node
 * Return: No Value
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t treeHeight = 0, i = 0;

	treeHeight = binary_tree_height(tree);
	for (i = 1; i <= treeHeight; i++)
		print_level(tree, i, func);
}

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: a pointer to the root node of a binary tree
 * Return: an unsigned integer signifying the height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t* tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);
	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);
	if (hl > hr)
		return (hl + 1);
	else
		return (hr + 1);
}

/**
 * print_level - prints a level of a binary tree
 * @tree: a pointer to the root node of the tree
 * @level: the level to be printed
 * Return: No Value
 */
void print_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (!tree)
		return;
	else if (level == 1)
		func(tree->n);
	else
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}
