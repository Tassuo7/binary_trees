#include "binary_trees.h"
/**
 * binary_tree_size - A function measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size.
 * Return: 0 if tree  null or Size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	return (1 + l + r);
}

