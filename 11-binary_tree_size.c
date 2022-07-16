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
