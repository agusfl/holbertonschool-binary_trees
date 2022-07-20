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
 * complete_aux_func - auxiliar function to check if a binary tree is complete
 * A complete binary tree is a binary tree in which all the levels are
 * completely filled except possibly the lowest one, which is filled from the
 * left.
 * @tree: pointer to the root node of the tree to check
 * @size: size of the tree
 * @index: first index of the binary tree
 * Return: 1 if complete, 0 if not
 */

int complete_aux_func(const binary_tree_t *tree, size_t size, size_t index)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (1); /* complete binary tree */
	}

	/* Not a complete binary tree */
	if (index > size)
	{
		return (0);
	}

	left = complete_aux_func(tree->left, size, index * 2 + 1);
	right = complete_aux_func(tree->right, size, index * 2 + 2);

	/* Si left o right son 0 es que no es un complete binary tree */
	if (left == 0 || right == 0)
		return (0);

	return (1);
}

/**
* binary_tree_is_complete - function that checks if a binary tree is complete
* @tree: pointer to the root node of the tree to check
* Return: 1 if the tree is complete or 0 if it is not
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	/* Condicion base para salir de la recursividad */
	if (tree == NULL)
		return (0);

	return (complete_aux_func(tree, binary_tree_size(tree) - 1, 0));
}
