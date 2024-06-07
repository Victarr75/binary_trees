#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node, or NULL if no common
 *         ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *ptr;

	if (first == NULL || second == NULL)
		return (NULL);

	ptr = first;
	while (ptr != NULL)
	{
		if (binary_tree_is_descendant(ptr, second))
			return ((binary_tree_t *)ptr);
		ptr = ptr->parent;
	}

	return (NULL);
}

/**
 * binary_tree_is_descendant - Checks if a node is a descendant of another
 * @node: A pointer to the potential descendant node
 * @ancestor: A pointer to the potential ancestor node
 *
 * Return: 1 if @node is a descendant of @ancestor, otherwise 0
 */
int binary_tree_is_descendant(const binary_tree_t *node, const binary_tree_t *ancestor)
{
	if (node == NULL || ancestor == NULL)
		return (0);

	while (node != NULL)
	{
		if (node == ancestor)
			return (1);
		node = node->parent;
	}

	return (0);
}
