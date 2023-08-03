#include "binary_trees.h"
/**
 * binary_tree_rotate_left - a function that performs
 * a right-rotation on a binary tree
 * @tree: A pointer to rotate
 * Return: Null or pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pvt, *t_p;

	if (!tree || !tree->left)
		return (NULL);
	t_p = tree->parent;
	pvt = tree->left;
	tree->left = pvt->right;
	if (pvt->right)
		pvt->right->parent = tree;
	pvt->right = tree;
	pvt->parent = t_p;
	t_p = pvt;
	return (pvt);
}

