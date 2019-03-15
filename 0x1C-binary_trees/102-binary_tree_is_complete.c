#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks to see if binary tree is complete
 * @tree: a pointer to the root node of a binary tree
 * Return: 1 for complete and 0 for incomplete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t treeHeight = 0, i = 0;

	if (!tree)
		return (0);
	treeHeight = binary_tree_height(tree);
	for (i = 1; i <= treeHeight; i++)
	{
		if (!level_order_traverse(tree, i))
			return (0);
	}
	return (1);
}

/**
 * binary_tree_height - get height of binary tree
 * @tree: a pointer to the root node of the binary tree
 * Return: an unsigned integer of the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
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
 * level_order_traverse - traverse based on level
 * @tree: a pointer to the root node of the tree
 * @level: level to be checked
 * Return: 1 for complete 0 for not
 */
unsigned char level_order_traverse(const binary_tree_t *tree, size_t level)
{
	size_t l = level, tHl = 0, tHr = 0;
	unsigned char (*func)(const binary_tree_t *tree, size_t level);

	if (!tree)
		return (1);
	tHl = binary_tree_height(tree->left);
	tHr = binary_tree_height(tree->right);
	if (!(tHl == tHr || tHl == (tHr - 1) || tHl == (tHr + 1)))
		return (0);
	if (level == 1)
	{
		if (!tree->left && tree->right)
			return (0);
		else if (tree->parent && tree == tree->parent->right)
		{
			if (!tree->parent->left->right && tree->left)
				return (0);
		}
		else if (!bt_middle_check(tree))
			return (0);
		return (1);
	}
	func = &level_order_traverse;
	return (func(tree->left, l - 1) && func(tree->right, l - 1));
}

/**
 * bt_middle_check - checks completeness of the two inner nodes of the tree
 * @node: a pointer to the node to check for incompatibility
 * Return: 1 for compatible 0 for compatible
 */
unsigned char bt_middle_check(const binary_tree_t *node)
{
	const binary_tree_t *travNodel = NULL, *travNoder = NULL;

	if (!node || !node->parent || !node->left)
		return (1);
	for (travNodel = node; travNodel->parent; travNodel = travNodel->parent)
		;
	travNoder = travNodel->right;
	travNodel = travNodel->left;
	for (; travNoder && travNodel; travNoder = travNoder->left)
	{
		printf("LEFT: %d RIGHT: %d\n", travNodel->n, travNoder->n);
		travNodel = travNodel->right;
	}
	if (!travNodel && travNoder)
		return (0);
	return (1);
}
