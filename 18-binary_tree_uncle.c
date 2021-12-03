#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle.
 * Return: If node is NULL, return NULL, If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (0);
	}
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	if (node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}
	return (0);
}
