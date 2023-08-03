#include "binary_trees.h"
/**
 * binary_tree_rotate_left - a function that performs
 * a left-rotation on a binary tree
 * @tree: A pointer to rotate
 * Return: Null or pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pvt;

	if (!tree || !tree->right)
		return (NULL);
	pvt = tree->right;
	tree->right = pvt->left;
	if (pvt->left)
		pvt->left->parent = tree;
	pvt->left = tree;
	pvt->parent = tree->parent;
	tree->parent = pvt;
	return (pvt);
}

