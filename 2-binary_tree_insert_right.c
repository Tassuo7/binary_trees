#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function inserts a node as
 * the right-child of another node
 * @parent: the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: NULL on failure or pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;


	if (!parent)
		return (NULL);
	new_n = binary_tree_node(parent, value);
	if (!new_n)
		return (NULL);
	if (parent->right)
	{
		new_n->right = parent->right;
		parent->right->parent = new_n;
	}
	parent->right = new_n;
	return (new_n);
}


