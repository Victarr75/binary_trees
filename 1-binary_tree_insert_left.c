#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 * If parent already has a left-child, the new node takes its place, and the
 * old left-child becomes the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = malloc(sizeof(binary_tree_t));
	if (new_left_node == NULL)
		return (NULL);

	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->left = parent->left;
	new_left_node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new_left_node;

	parent->left = new_left_node;

	return (new_left_node);
}
