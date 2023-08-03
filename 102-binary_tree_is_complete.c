#include "binary_trees.h"
/**
 * binary_tree_is_complete - a function that checks
 * if a binary tree is complete
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if the tree is complete or 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t *cur, *q[1000];
	int f = -1, r = -1, comp = 1;

	if (!tree)
		return (0);
	q[++r] = tree;
	while (f < r)
	{
		cur = q[++f];
		if (cur->left)
		{
			if (!comp)
				return (0);
			q[++r] = cur->left;
		}
		else
			comp = 0;
		if (cur->right)
		{
			if (!comp)
				return (0);
			q[++r] = cur->right;
		}
		else
			comp = 0;
	}
	return (1);
}

