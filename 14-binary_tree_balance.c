#include "binary_trees.h"

/**
* binary_tree_balance - funcion para medir el factor de un arbol binario
* @tree: puntero al nodo(root) del arbol a medir
* Return: 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	/*debo comparar las alturas para saber si esta equilibrado*/
	left_height = 1 + binary_tree_balance(tree->left);
	right_height = 1 + binary_tree_balance(tree->right);

	/*resto la 2 alturas para obtener el balance*/
	return (left_height - right_height);
}
