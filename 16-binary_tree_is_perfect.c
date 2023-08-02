#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is ful
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int le, ri;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	le = binary_tree_is_full(tree->left);
	ri = binary_tree_is_full(tree->right);
	if (tree->left && tree->right)
		return (le && ri);
	return (0);
}
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
	right_h = tree->right ? (1 + binary_tree_height(tree->right)) : 0;
	left_h = tree->left ? (1 + binary_tree_height(tree->left)) : 0;
	return (left_h > right_h ? left_h : right_h);
}
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree:  a pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, OR 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (binary_tree_is_full(tree) && l == r);
}


