#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: If tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	const binary_tree_t *current = tree;
	int done = 0;
	stack_t *stack = NULL;

	while (!done)
	{
		if (current != NULL)
		{
			stack_push(&stack, current);
			current = current->left;
		}
		else
		{
			if (!stack_empty(stack))
			{
				current = stack_pop(&stack);
				func(current->n);
				current = current->right;
			}
			else
			{
				done = 1;
			}
		}
	}

	free_stack(stack);
}
