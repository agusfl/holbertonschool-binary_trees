#include "binary_trees.h"

/**
* binary_tree_leaves - Contar la cantidad de hojas en binary tree
* @tree: Pointer to the parent node
* Return: description
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t h = 0;

	if (tree == NULL)
		return (0);

	/*retorno  cuando encuentro una hoja*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*despúes de tener ambos retornos(hojas) las sumo y retorno*/
	h = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (h);
}
