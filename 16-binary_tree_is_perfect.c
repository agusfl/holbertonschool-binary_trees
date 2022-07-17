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
* binary_tree_is_perfect - check is a binary tree is perfect
* A perfect binary tree is a type of binary tree in which every internal node
* has exactly two child nodes and all the leaf nodes are at the same level.
* @tree: pointer to the root node of the tree to check
* Return: if tree is NULL return 0, return 1 if is perfect
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);

	/* Obtenemos la profundidad del arbol binario desde root */
	left_side = binary_tree_size(tree->left);
	right_side = binary_tree_size(tree->right);

	/* Tiene que haber la misma cantidad de nodos en los dos lados */
	if (left_side == right_side)
		return (1);

	return (0);
}
