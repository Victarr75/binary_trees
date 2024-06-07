#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	const binary_tree_t *current = tree;
	const binary_tree_t *stack[100]; /* Assume max height of the tree is 100 */
	size_t top = 0;

	while (current || top > 0)
	{
		while (current)
		{
			func(current->n);

			if (current->right)
				stack[top++] = current->right;

			current = current->left;
		}

		current = stack[--top];
	}
}
