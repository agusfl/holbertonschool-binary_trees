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

	/**
	 * Compruebo que siga teniendo hijos para sumar si los tiene sumo los nodos
	 * usando recursividad.
	 */
	if (tree->left != NULL || tree->right != NULL)
		p_nodes = (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right))
		+ 1; /* tiramos el uno para abajo por betty */

	return (p_nodes);
}
