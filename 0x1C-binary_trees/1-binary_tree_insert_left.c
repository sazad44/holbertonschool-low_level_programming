#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: a pointer to the parent node that a left node will be inserted to
 * @value: value of the node to be inserted
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *retNode = NULL, *tmpNode = NULL;

	/*NULL Check*/
	if (!parent)
		return (NULL);
	/*Allocate memory for new node to be added or inserted*/
	retNode = malloc(sizeof(binary_tree_t));
	if (!retNode)
		return (NULL);
	/*Initialize new node with value and child NULLs*/
	retNode->n = value;
	retNode->left = NULL;
	retNode->right = NULL;
	retNode->parent = parent;
	/*Set tmpNode to already existing left child, if existing*/
	if (parent->left)
		tmpNode = parent->left;
	/*Insert created node in between parent and left child/NULL*/
	parent->left = retNode;
	retNode->left = tmpNode;
	if (tmpNode)
		tmpNode->parent = retNode;
	/*Return address of node created and inserted as left child*/
	return (retNode);
}
