#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the least common ancestor of two nodes
 * @f: a pointer to the first node to find an ancestor for
 * @s: a pointer to the second node to find an ancestor for
 * Return: a pointer to the node that is the least common ancestor
 */
bst_t *binary_trees_ancestor(const binary_tree_t *f, const binary_tree_t *s)
{
	const bst_t *tmpNodef = NULL, *tmpNodes = NULL;
	unsigned int depthf = 0, depths = 0, i = 0;

	for (tmpNodef = f; tmpNodef->parent; tmpNodef = tmpNodef->parent)
		depthf++;
	for (tmpNodes = s; tmpNodes->parent; tmpNodes = tmpNodes->parent)
		depths++;
	tmpNodef = f;
	tmpNodes = s;
	if (depths > depthf)
	{
		for (i = 0; i < (depths - depthf); i++)
			tmpNodes = tmpNodes->parent;
	}
	else if (depthf > depths)
	{
		for (i = 0; i < (depthf - depths); i++)
			tmpNodef = tmpNodef->parent;
	}
	if (tmpNodef == tmpNodes)
		return ((bst_t *)tmpNodef);
	for (; tmpNodes && tmpNodef; tmpNodes = tmpNodes->parent)
	{
		if (tmpNodes == tmpNodef)
			return ((bst_t *)tmpNodes);
		tmpNodef = tmpNodef->parent;
	}
	return (NULL);
}
