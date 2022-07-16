#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves in a binary tree, leaves are nodes
* with no children
* @tree: Pointer to the parent node
* Return: Number of leaves, if the tree is NULL return 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	/* Condicion para que un nodo sea un leaf (hoja) - no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Sumamos los retornos que hayan dado 1 por ser una hoja */
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}
