#include "binary_trees.h"

/**
* binary_trees_ancestor - Function that finds the lowest common ancestor of two
* nodes
* @first: Pointer to the first node
* @second: Pointer to the second node
* Return: A pointer to the lowest common ancestor node of the two given nodes
* If no common ancestor was found, your function must return NULL
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	const binary_tree_t *aux1 = first, *aux2 = second;

	/*cuando el nodo es descendiente de si mismo*/
	if (second->parent == aux1)
		return (second->parent);
	while (aux1)
	{
		aux1 = aux1->parent;
		while (aux2)
		{
			aux2 = aux2->parent;
			if (aux1 == aux2)
				return ((binary_tree_t *)aux1);
		}
	}
	return (NULL);
}
