#include "binary_trees.h"
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 if tree = NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int dep, right_h, left_h, pr, pl;

	if (!tree)
		return (0);
	right_h = binary_tree_height(tree->right);
	left_h = binary_tree_height(tree->left);

	if (left_h != right_h)
		return (0);
	if (tree->left != NULL)
	{
		dep = binary_tree_depth(tree->left);
		if (dep != left_h)
			return (0);
	}
	pr = binary_tree_is_perfect(tree->right);
	pl = binary_tree_is_perfect(tree->left);
	return (pl && pr);
}

/**
 * binary_tree_depth - a function that measures
 * the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 * Return: 0 if tree is NULL or Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		dep++;
		tree = tree->parent;
	}
	return (dep);
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
	right_h = (tree->right != NULL) ? (1 + binary_tree_height(tree->right)) : 0;
	left_h = (tree->left != NULL) ? (1 + binary_tree_height(tree->left)) : 0;
	return (left_h > right_h ? left_h : right_h);
}
