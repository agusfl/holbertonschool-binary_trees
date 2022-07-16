#include "binary_trees.h"
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
* binary_tree_is_full - check if a binary tree is full
* @tree: puntero al nodo(root) del arbol binario a analizaar
* Return: tree is NULL return 0, or 1 if is full
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);
	/*si el size de ambos extremos son iguales is FULL*/
	if (left_height == right_height)
		return (1);

	return (0);
}
