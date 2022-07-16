#include "binary_trees.h"

#include "binary_trees.h"

/**
* binary_tree_depth - funcion que mida la profundidad de un nodo en un árbol
* @tree: puntero al nodo a medir profundidad
* Return: num of depth of the node or 0.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* Caso base para salir de la recursividad */
	if (tree == NULL)
		return (0);

	/*Cada vez que pueda ir hacía arriba en la arbol sumo 1*/
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	/*Si es 0 return 0, y sino el núm de profundidades obtenido*/
	return (depth);
}

/**
* int binary_tree_is_perfect - check is a binary tree is perfect
* @tree: puntero al nodo(root) del arbol binario a analizaar
* Return: if tree is NULL, return 0, return 1 if is perfect
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	depth = binary_tree_depth(tree);

	/*todas las hojas tinen que estar en la profundidad 2*/
	if ((tree->left == NULL && tree->right == NULL) && depth == 2)
		return(1);
	
	return (0);
}
