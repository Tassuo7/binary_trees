#include "binary_trees.h"
/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 * Return: NuLL or A pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (NULL);
}

