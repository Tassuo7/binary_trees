#include "binary_trees.h"
int is_bst(const binary_tree_t *t, int mi, int ma);
/**
 * binary_tree_is_bst - a function that checks if a binary tree is a valid
 * @tree: A pointer  to check
 * Return: 1 if the tree is a valid BST or 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
/**
 * is_bst - Function recursive to check if a binary tree is a valid BST
 * @t: pointer to the root node of the tree
 * @mi: min allowed value for the current subtree
 * @ma: max allowed value for the current subtree
 * Return: 1 if the tree is a valid BST or 0
 */
int is_bst(const binary_tree_t *t, int mi, int ma)
{
	if (!t)
		return (1);
	if (t->n <= mi || t->n >= ma)
		return (0);
	return (is_bst(t->left, mi, t->n) && is_bst(t->right, t->n, ma));
}
