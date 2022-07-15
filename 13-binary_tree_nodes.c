#include "binary_trees.h"

/**
* binary_tree_nodes - contar el numero de nodos que tienen hijos
* @tree: puntero al nodo(root) del arbol
* Return: number of nodes or 0 
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		nodes = 
}


  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)