#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_subtree_height;
	size_t right_subtree_height;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_subtree_height = 1 + binary_tree_height(tree->left);
	else
		left_subtree_height = 0;

	if (tree->right)
		right_subtree_height = 1 + binary_tree_height(tree->right);
	else
		right_subtree_height = 0;

	if (left_subtree_height > right_subtree_height)
		return (left_subtree_height);
	else
		return (right_subtree_height);
}
