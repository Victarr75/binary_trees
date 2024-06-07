#include "binary_trees.h"

/**
 * depth - Calculates the depth of a node in a binary tree.
 * @node: Pointer to the node.
 *
 * Return: Depth of the node.
 */
int depth(const binary_tree_t *node)
{
    int d = 0;

    while (node)
    {
        node = node->parent;
        d++;
    }
    return (d);
}

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes.
 *         If no common ancestor was found, returns NULL.
 */
binary_tree_t *binary_trees_ancestor(
    const binary_tree_t *first, const binary_tree_t *second)
{
    int depth_first, depth_second;

    if (!first || !second)
        return (NULL);

    /* Get the depths of both nodes */
    depth_first = depth(first);
    depth_second = depth(second);

    /* Move up in the tree from the deeper node to match the depth */
    while (depth_first > depth_second)
    {
        first = first->parent;
        depth_first--;
    }

    while (depth_second > depth_first)
    {
        second = second->parent;
        depth_second--;
    }

    /* Move up in the tree from both nodes until we find a common ancestor */
    while (first && second && first != second)
    {
        first = first->parent;
        second = second->parent;
    }

    /* Return the common ancestor */
    return ((binary_tree_t *)first);
}
