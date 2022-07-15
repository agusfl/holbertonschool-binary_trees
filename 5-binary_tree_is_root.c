#include "binary_trees.h"

/**
* binary_tree_is_root - chec if a given node is a root
* chequeamos que no tenga parent.
* @node: es el nodo a chequear
* Return: is NULL, return 0, root? return 1
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/*sabemos que es el unico nodo que no tiene padre*/
	if (node->parent == NULL)
		return (1);

	/*en cualquier otro caso*/
	return (0);
}
