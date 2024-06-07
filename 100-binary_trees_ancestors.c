#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *a, *b;

	if (!first || !second)
		return (NULL);

	a = first;
	b = second;

	/* Move up the tree from first node until NULL */
	while (a)
	{
		const binary_tree_t *temp = b;

		/* Compare second node's ancestors with current ancestor of first node */
		while (temp)
		{
			if (a == temp)
				return ((binary_tree_t *)a);
			temp = temp->parent;
		}
		a = a->parent;
	}

	return (NULL);
}
