#include "binary_trees.h"
/**
 * binary_tree_nodes - A function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes
 * Return: 0 if tree = null or Number of nodes with at least 1 child in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (1 + l + r);
	return (0);
}

