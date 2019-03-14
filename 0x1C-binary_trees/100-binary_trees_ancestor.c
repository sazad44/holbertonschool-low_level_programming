#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the least common ancestor of two nodes
 * @first: a pointer to the first node to find an ancestor for
 * @second: a pointer to the second node to find an ancestor for
 * Return: a pointer to the node that is the least common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *f, const binary_tree_t *s)
{
	binary_tree_t *tmpNode = NULL;
	unsigned int depthf = 0, depths = 0, i = 0;

	for (tmpNode = f; tmpNode->parent; tmpNode = tmpNode->parent)
		depthf++;
	for (tmpNode = s; tmpNode->parent; tmpNode = tmpNode->parent)
		depths++;
	if (depths > depthf)
	{
		for (i = 0; i < (depths - depthf); i++)
			s = s->parent;
	}
	else if (depthf > depths)
	{
		for (i = 0; i < (depthf - depths); i++)
			f = f->parent;
	}
	if (f == s)
		return (f);
	
}
