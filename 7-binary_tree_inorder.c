#include "binary_trees.h"

/**
* binary_tree_inorder - Function that goes through a binary tree using
* in-order traversal (first traverse left side,then root,and then right side).
* @tree: Pointer to the root node of the tree to traverse
* @func: Is a pointer to a function to call for each node.
* The value in the node must be passed as a parameter to this function.
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or func are NULL */
	if (tree == NULL || func == NULL)
	{
		return; /* Base case for exit recursion */
	}

	/* Traverse left side with recursion */
	binary_tree_inorder(tree->left, func);

	/* Call func with the data value of tree (parameter 'n' of the struct) */
	func(tree->n);

	/* Traverse right side with recursion */
	binary_tree_inorder(tree->right, func);
}
