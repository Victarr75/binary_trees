#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (!tree)
        return (0);

    while (tree->parent)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 *         or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    size_t depth_first, depth_second;

    if (!first || !second)
        return (NULL);

    depth_first = binary_tree_depth(first);
    depth_second = binary_tree_depth(second);

    /* Bring both nodes to the same level */
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

    /* Move up both nodes until a common ancestor is found */
    while (first && second)
    {
        if (first == second)
            return ((binary_tree_t *)first);
        first = first->parent;
        second = second->parent;
    }

    return (NULL);
}
