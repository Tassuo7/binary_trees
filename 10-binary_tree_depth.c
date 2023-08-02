#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures the depth of a node in a binary tree.
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

