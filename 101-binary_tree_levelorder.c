#include "binary_trees.h"
/**
 * binary_tree_levelorder - a function that goes
 * through a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int f = -1, r = -1;
	binary_tree_t *queue[1000], *cur;

	if (!tree || !func)
		return;
	queue[++r] = (binary_tree_t *)tree;
	while (f < r)
	{
		cur = queue[++f];
		func(cur->n);
		if (cur->left)
			queue[++r] = cur->left;
		if (cur->right)
			queue[++r] = cur->right;
	}
}

