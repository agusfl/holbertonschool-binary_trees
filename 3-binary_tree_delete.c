#include "binary_trees.h"

/**
* binary_tree_delete - Function that deletes an entire binary tree
* @tree: pointer to the root node of the tree to delete
* Return: If tree is NULL, do nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL) 
		return; /* Condicion base para salir de la recursion */
	binary_tree_delete(tree->right); /* Recursive delete for right side of tree*/
	binary_tree_delete(tree->left); /* Recursive delete for left side of tree*/
	free(tree); /* free */
}
