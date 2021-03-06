#include "binary_trees.h"

/**
* binary_tree_insert_right - Function that inserts a node as the right-child of
* another node
* @parent: Is a pointer to the node to insert the right-child in
* @value: Is the value to store in the new node
* Return: Pointer to the created node or NULL in case of failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/* Check if parent is NULL */
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
	new_node->left = NULL;
	new_node->right = parent->right;

	/* Chequeamos si el parent right ya tiene un hijo*/
	if (parent->right != NULL)
	{
		new_node->right->parent = new_node;
		/* Seteamos el parent del nodo de la derecha del parent actual */
	}
	/**
	 * Seteamos el que era el hijo como el nuevo right child, en el ejemplo
	 * del 2-main seria el numero: 402
	 */
	parent->right = new_node;

	return (new_node);
}
