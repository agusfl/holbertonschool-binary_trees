#include "binary_trees.h"

/**
* binary_tree_insert_left - Function that inserts a node as the left-child of
* another node
* @parent: Is a pointer to the node to insert the left-child in
* @value: Is the value to store in the new node
* Return: Pointer to the created node or NULL in case of failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/* Check is parent is NULL */
	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	/* Check if there was an error with malloc */
	if (new_node == NULL)
		return (NULL);
	/*seteo de data*/
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = parent->left;
	new_node->right = NULL;

	/* Chequeamos si el parent left ya tiene un hijo*/
	if (parent->left != NULL)
	{
		new_node->left->parent = new_node;
		/* Seteamos el parent del nodo de la izquierda del parent actual */
	}
	/**
	 * Seteamos el que era el hijo como el nuevo left child, en el ejemplo
	 * del 1-main seria el numero: 12
	 */
	parent->left = new_node;

	return (new_node);
}
