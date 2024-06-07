# Binary Trees

This project implements various functions for working with binary trees in C. Below is a brief overview of binary trees and the functions implemented in this project.

## What is a Binary Tree?
A binary tree is a hierarchical data structure composed of nodes. Each node contains a value and references to two child nodes, known as the left child and the right child.

## Difference between Binary Tree and Binary Search Tree (BST)
A binary tree does not follow any specific ordering of its nodes, whereas a Binary Search Tree (BST) follows a specific ordering property. In a BST, for any given node, all nodes in its left subtree have values less than the node's value, and all nodes in its right subtree have values greater than the node's value.

## Possible Gain in Time Complexity Compared to Linked Lists
Binary trees provide better time complexity for certain operations compared to linked lists. For example, searching for a value in a binary search tree has a time complexity of O(log n), whereas in a linked list, it is O(n).

## Depth, Height, and Size of a Binary Tree
- **Depth:** The depth of a node in a binary tree is the number of edges from the root node to that node.
- **Height:** The height of a binary tree is the number of edges on the longest path from the root node to a leaf node.
- **Size:** The size of a binary tree is the total number of nodes in the tree.

## Traversal Methods
Traversal refers to the process of visiting all the nodes in a tree. There are three main traversal methods:
1. **Pre-order traversal:** Visit the current node, then recursively traverse the left subtree, followed by the right subtree.
2. **In-order traversal:** Recursively traverse the left subtree, visit the current node, then recursively traverse the right subtree.
3. **Post-order traversal:** Recursively traverse the left subtree, then the right subtree, and finally visit the current node.

## Types of Binary Trees
- **Complete Binary Tree:** A binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.
- **Full Binary Tree:** A binary tree in which every node other than the leaves has two children.
- **Perfect Binary Tree:** A binary tree in which all interior nodes have two children and all leaves are at the same level.
- **Balanced Binary Tree:** A binary tree in which the depth of the two subtrees of every node never differs by more than one.

## Function Implementations
1. `binary_tree_node`: Creates a binary tree node.
2. `binary_tree_insert_left`: Inserts a node as the left child of another node.
3. `binary_tree_insert_right`: Inserts a node as the right child of another node.
4. `binary_tree_delete`: Deletes an entire binary tree.
5. `binary_tree_is_leaf`: Checks if a node is a leaf.
6. `binary_tree_is_root`: Checks if a given node is a root.
7. `binary_tree_preorder`: Performs pre-order traversal of a binary tree.
8. `binary_tree_inorder`: Performs in-order traversal of a binary tree.
9. `binary_tree_postorder`: Performs post-order traversal of a binary tree.
10. `binary_tree_height`: Measures the height of a binary tree.
11. `binary_tree_depth`: Measures the depth of a node in a binary tree.
12. `binary_tree_size`: Measures the size of a binary tree.
13. `binary_tree_leaves`: Counts the number of leaves in a binary tree.
14. `binary_tree_nodes`: Counts the number of nodes with at least one child in a binary tree.
15. `binary_tree_balance`: Measures the balance factor of a binary tree.
16. `binary_tree_is_perfect`: Checks if a binary tree is perfect.
17. `binary_tree_sibling`: Finds the sibling of a node.
18. `binary_tree_uncle`: Finds the uncle of a node.

**Note:** Each function is implemented as per the given prototypes and requirements.

# Project: Binary Trees

## Overview
This project contains various functions to work with binary trees. It implements basic operations such as creating a binary tree node, inserting nodes as left or right children, deleting an entire binary tree, and traversing the tree using different methods. Additionally, it provides functions to measure properties of binary trees such as height, depth, size, number of leaves, number of nodes, balance factor, and checking if a binary tree is perfect.

## Table of Contents
1. [General Information](#general-information)
2. [Data Structures](#data-structures)
3. [Functions](#functions)
4. [Requirements](#requirements)
5. [How to Use](#how-to-use)
6. [Contributing](#contributing)
7. [License](#license)

## General Information

### What is a Binary Tree?
A binary tree is a hierarchical data structure composed of nodes. Each node contains a value, a reference to its parent node, and references to its left and right child nodes. In a binary tree, each node can have at most two children, referred to as the left child and the right child.

### Difference Between a Binary Tree and a Binary Search Tree (BST)
While both binary trees and binary search trees are binary trees, they have different properties. In a binary search tree, for any given node:
- All nodes in the left subtree have values less than the node's value.
- All nodes in the right subtree have values greater than the node's value.

### Gain in Time Complexity Compared to Linked Lists
Binary trees offer significant improvements in time complexity compared to linked lists for certain operations, such as search, insert, and delete. In a binary search tree, these operations have an average time complexity of O(log n), where n is the number of nodes in the tree. This is more efficient than the linear time complexity of O(n) for linked lists.

### Properties of Binary Trees
- **Depth**: The depth of a node is the number of edges from the root to that node.
- **Height**: The height of a tree is the maximum depth of any node in the tree.
- **Size**: The size of a tree is the total number of nodes in the tree.

### Traversal Methods
Different traversal methods allow us to visit all the nodes in a binary tree in a specific order:
- **Pre-order**: Visit the current node before its children (root, left, right).
- **In-order**: Visit the left child, then the current node, and finally the right child (left, root, right).
- **Post-order**: Visit the children of a node before the node itself (left, right, root).

### Types of Binary Trees
- **Complete Binary Tree**: A binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.
- **Full Binary Tree**: A binary tree in which every node other than the leaves has two children.
- **Perfect Binary Tree**: A binary tree that is both full and complete.
- **Balanced Binary Tree**: A binary tree in which the height of the left and right subtrees of any node differ by at most one.

## Data Structures
This project uses the following data structures:
- `struct binary_tree_s`: Structure representing a binary tree node.
- `binary_tree_t`: Typedef for `struct binary_tree_s`.
- `bst_t`: Typedef for `struct binary_tree_s` used for Binary Search Trees.
- `avl_t`: Typedef for `struct binary_tree_s` used for AVL Trees.
- `heap_t`: Typedef for `struct binary_tree_s` used for Max Binary Heaps.

## Functions
1. `binary_tree_node`: Creates a binary tree node.
2. `binary_tree_insert_left`: Inserts a node as the left child of another node.
3. `binary_tree_insert_right`: Inserts a node as the right child of another node.
4. `binary_tree_delete`: Deletes an entire binary tree.
5. `binary_tree_is_leaf`: Checks if a node is a leaf.
6. `binary_tree_is_root`: Checks if a given node is a root.
7. `binary_tree_preorder`: Traverses a binary tree using pre-order traversal.
8. `binary_tree_inorder`: Traverses a binary tree using in-order traversal.
9. `binary_tree_postorder`: Traverses a binary tree using post-order traversal.
10. `binary_tree_height`: Measures the height of a binary tree.
11. `binary_tree_depth`: Measures the depth of a node in a binary tree.
12. `binary_tree_size`: Measures the size of a binary tree.
13. `binary_tree_leaves`: Counts the leaves in a binary tree.
14. `binary_tree_nodes`: Counts the nodes with at least one child in a binary tree.
15. `binary_tree_balance`: Measures the balance factor of a binary tree.
16. `binary_tree_is_perfect`: Checks if a binary tree is perfect.
17. `binary_tree_sibling`: Finds the sibling of a node.
18. `binary_tree_uncle`: Finds the uncle of a node
