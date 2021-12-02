#include "binary_trees.h"
/**
 * binary_tree_height - through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int hi_left = -1, hi_rigth = -1;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (tree->right != NULL)
	{
		hi_rigth = binary_tree_height(tree->right);
	}
	if (tree->left != NULL)
	{
		hi_left = binary_tree_height(tree->left);
	}
	if (hi_rigth > hi_left)
	{
		return (hi_rigth + 1);
	}
	else
	{
		return (hi_left + 1);
	}
}

#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left = binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		right = binary_tree_height(tree->right) + 1;
	}
	return (left - right);
}
