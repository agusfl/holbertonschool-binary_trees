#include "binary_trees.h"

/**
* binary_tree_nodes - contar el numero de nodos que tienen hijos
* @tree: puntero al nodo(root) del arbol
* Return: number of nodes or 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t p_nodes = 0;

	if (tree == NULL)
		return (0);

	/*compruebo que siga teniendo hijos para sumar*/
	/*si los tiene sigo acumulando nodos padres*/
	if (tree->left != NULL || tree->right != NULL)
		p_nodes = (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)) + 1;

	/*sumo el conteo de ambos exteriores del arbol*/
	/* p_nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);*/
	return (p_nodes);
}
