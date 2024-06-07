#include "binary_trees.h"

/**
 * is_root_node - Checks if a given node is a root in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 */
int is_root_node(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
