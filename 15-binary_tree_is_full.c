#include "binary_trees.h"
/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 if the tree is full, 0 if tree = NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	if (tree->left && tree->right)
		return (l && r);
	return (0);
}

