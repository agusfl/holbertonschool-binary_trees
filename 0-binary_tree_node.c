#include "binary_trees.h"

/**
* binary_tree_node - Integer stored in the node
* @parent: puntero al nodo padre del nodo a crear
* @value: VALOR del nodo
* Return: Puntero al nuevo nodo
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
    /*seteo de data*/
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
