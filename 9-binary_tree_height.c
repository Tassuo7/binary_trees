#include "binary_trees.h"
/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: 0 if tree is null or height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;


	if (!tree)
		return (0);
	right_h = binary_tree_height(tree->right);
	left_h = binary_tree_height(tree->left);
	return (1 + (left_h > right_h ? left_h : right_h));
}

