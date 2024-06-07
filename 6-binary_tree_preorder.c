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

	while (current)
	{
		if (current->left == NULL)
		{
			func(current->n);
			current = current->right;
		}
		else
		{
			const binary_tree_t *pre = current->left;

			while (pre->right != NULL && pre->right != current)
				pre = pre->right;

			if (pre->right == NULL)
			{
				func(current->n);
				pre->right = current;
				current = current->left;
			}
			else
			{
				pre->right = NULL;
				current = current->right;
			}
		}
	}
}
