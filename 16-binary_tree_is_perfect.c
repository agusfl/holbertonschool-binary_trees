#include "binary_trees.h"

/**
* binary_tree_size - funcion para medir el tamaño de un arbol binario
* el size de un arbol es la suma de todos los nodos
* @tree: puntero a nodo(root) del arbol a medir el tamaño.
* Return: Tamaño del arbol o 0 si el arbol es NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	/*Condicion de finalización de la recursión*/
	if (tree == NULL)
		return (0);

	/*Sumamos lado izq + lado der + 1 por el root asi sumamos todos los nodos*/
	size =  (binary_tree_size(tree->left) + binary_tree_size(tree->right)) + 1;

	return (size);
}


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
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	/*obtenemos la profundidad del arbol binario desde root*/
	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);

	/*todas las hojas tinen que estar en la profundidad 2*/
	if (left_height == right_height)
		return (1);

	return (0);
}
