#include "binary_trees.h"

/**
* binary_tree_size - funcion para medir el tamaño de un arbol binario
* @tree: puntero a nodo(root) del arbol a medir el tamaño.
* Return: Tamaño del arbol o 0 si el arbol es NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	/*Condicion de finalización de la recursión*/
	if (!tree)
		return (0);

	/*Puedo verlo como medir la altura de ambos lados y sumar*/
	size =  (binary_tree_size(tree->left) + binary_tree_size(tree->right)) + 1;

	return (size);
}
