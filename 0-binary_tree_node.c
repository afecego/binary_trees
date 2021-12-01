#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = malloc(sizeof(binary_tree_t));

	if (nodo == NULL)
	{
		return (NULL);
	}

	nodo->n = value;
	nodo->parent = parent;
	nodo->left = NULL;
	nodo->right = NULL;

	return (nodo);
}
