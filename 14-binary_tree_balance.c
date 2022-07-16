#include "binary_trees.h"

/**
* binary_tree_balance - funcion para medir el factor de un arbol binario
* @tree: puntero al nodo(root) del arbol a medir
* Return: 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0, res = 0;
	if (tree == NULL)
		return (0);

	/*debo comparar las alturas para saber si esta equilibrado*/
	l_height = binary_tree_balance(tree->left)+ 1;
	l_right = binary_tree_balance(tree->left)+ 1;

	/*resto la 2 alturas para obtener el balance*/
	res = l_height - l_right;
	return (res);
}
