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
	right_h = tree->right ? (1 + binary_tree_height(tree->right)) : 1;
	left_h = tree->left ? (1 + binary_tree_height(tree->left)) : 1;
	return (left_h > right_h ? left_h : right_h);
}
/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return:  0 if tree is NULL or balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}

