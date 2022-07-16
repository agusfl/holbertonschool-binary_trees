#include "binary_trees.h"

/**
* binary_tree_height - Function that measures the height of a binary tree.
* The height of the node is the distance from that node to the deepest node
* of the tree.
* @tree: Pointer to the root node of the tree to measure the height.
* Return: return the height or 0 if tree is NULL.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	/* Caso base para salir de la recursividad */
	if (tree == NULL)
		return (0);

	/**
	 * Si el siguiente nodo tanto del lado izq como del der es NULL significa
	 * que es una leaf (es el ultimo nodo) MODIFICAMOS esta parte para que
	 * retorne 1 en lugar de 0. En este caso lo modificamos para que retorne 1
	 * porque queremos que nos cuente ese nodo para poder ver la diferencia de
	 * alturas entre el lado izq y el der para ver el balance factor.
	 */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* Contamos el height de forma recursiva, sumamos 1 cada pasada: */
	height_left = 1 + binary_tree_height(tree->left);
	height_right = 1 + binary_tree_height(tree->right);

	/* Si el lado izq es mayor al der entonces retornar lado izq */
	if (height_left >= height_right)
	{
		return (height_left);
	}
	else
	{
		return (height_right);
	}
}

/**
* binary_tree_balance - function that measures the balance factor of a binary
* tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	/* Modificamos la funcion que hicimos en la task 9 para contar la altura */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Se restan las 2 alturas para obtener el balance */
	return (left_height - right_height);
}
