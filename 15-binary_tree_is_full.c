#include "binary_trees.h"

/**
* binary_tree_is_full - check if a binary tree is full.
* A full Binary tree is a special type of binary tree in which every parent
* node/internal node has either two or no children.
* @tree: pointer to the root node of the tree to check
* Return: tree is NULL return 0, or 1 if is full
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);

	/* Si no tiene hijos cumple con la condicion de ser un full binary tree */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/* Si el nodo tiene SOLO un hijo NO es un full binary tree */
	if (tree->left != NULL && tree->right == NULL)
	{
		return (0);
	}
	/* Si el nodo tiene SOLO un hijo NO es un full binary tree */
	if (tree->left == NULL && tree->right != NULL)
	{
		return (0);
	}

	/* Llamamos a funcion que estamos creando de manera recursiva */
	left_side = binary_tree_is_full(tree->left);
	right_side = binary_tree_is_full(tree->right);

	/**
	 * Si tanto las variables left_side como right_side retornaron 1 signfica
	 * el nodo tiene DOS hijos, por lo tanto cumple la condicion de ser un full
	 * binary tree, por eso retornamos 1 y de lo contrario se retorna 0
	 */
	if (left_side == 1 && right_side == 1)
		return (1);
	else
		return (0);
}
