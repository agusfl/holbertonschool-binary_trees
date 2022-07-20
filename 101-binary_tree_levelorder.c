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
	 * que es una leaf (es el ultimo nodo, entonces la hight va a ser: 0).
	 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

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
 * current_level - Prints current level of binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * @level: current level of the tree
 */

void current_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 0)
	{
		func(tree->n);
	}

	if (level > 0)
	{
		/* Recorremos el lado izquierdo */
		current_level(tree->left, func, level - 1);
		/* Recorremos el lado derecho */
		current_level(tree->right, func, level - 1);
	}
}

/**
* binary_tree_levelorder - function that goes through a binary tree using level
* -order traversal
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = 0;
	size_t level = 0;

	if (tree == NULL || func == NULL)
	{
		return;
	}

	height = binary_tree_height(tree);

	/* "level" lo seteamos en 0 y va incrementando hasta ser igual a height */
	while (height >= level)
	{
		/* Se llama recursivamente a la funcion current_level */
		current_level(tree, func, level);
		level++;
	}
}
