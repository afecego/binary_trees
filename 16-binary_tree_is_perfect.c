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
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
		if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}
	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right) &&
		binary_tree_is_full(tree) == 1)
	{
		return (1);
	}
	return (0);
}
