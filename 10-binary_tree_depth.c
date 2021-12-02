#include "binary_trees.h"
/**
 * binary_tree_depth - function measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to measure the depth.
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
}
