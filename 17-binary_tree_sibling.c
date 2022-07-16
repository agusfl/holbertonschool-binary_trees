#include "binary_trees.h"

/**
* binary_tree_sibling - function that finds the sibling of a node
* @parametro: Pointer to the node to find the sibling
* Return: Pointer to the sibling node or NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/**
	 * Chequeamos si el nodo que pasan como argumento es el nodo de la izq del
	 * nodo padre (el root) y si el nodo "hermano (sibling)" NO es NULL, ya que
	 * si fuera NULL queremos que vaya al return NULL de abajo porque en dicho
	 * caso no tiene hermano.
	 */
	if (node == node->parent->left && node->parent->right != NULL)
		return (node->parent->right);

	/**
	 * Chequeamos si el nodo que pasan como argumento es el nodo de la derecha
	 * del nodo padre (el root) y si el nodo "hermano (sibling)" NO es NULL, ya
	 * que si fuera NULL queremos que vaya al return NULL de abajo porque en
	 * dicho caso no tiene hermano.
	 */
	if (node == node->parent->right && node->parent->left != NULL)
		return (node->parent->left);

	/* De lo contrario retornar NULL */
	return (NULL);
}
