#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: the node to insert the left-child in
 * @value: to store in the new node
 * Return: NULL on failure or parent is NULL,or pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);
	if (!new_n)
		return (NULL);

	if (parent->left)
	{
		new_n->left = parent->left;
		parent->left->parent = new_n;
	}
	parent->left = new_n;
	return (new_n);
}
