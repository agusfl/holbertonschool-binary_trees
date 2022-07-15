#include "binary_trees.h"

/**
* binary_tree_depth - funcion que mida la profundidad de un nodo en un árbol
* @tree: puntero al nodo a medir profundidad
* Return: num of depth of the node or 0.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t prof = 0;

	/* Caso base para salir de la recursividad */
	if (tree == NULL)
		return (0);

	/*Cada vez que pueda ir hacía arriba en la arbol sumo 1*/ 
	if (tree->parent)
		prof = 1 + binary_tree_depth(tree->parent);

	/*Si es 0 return 0, y sino el núm de profundidades obtenido*/
	return (prof);
}
