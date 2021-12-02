#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int hi_left = 0, hi_rigth = 0, sum = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->right != NULL)
	{
		hi_rigth = binary_tree_size(tree->right);
	}
	if (tree->left != NULL)
	{
		hi_left = binary_tree_size(tree->left);
	}
	sum = hi_left + hi_rigth;
	return (sum + 1);
}
