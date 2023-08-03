#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 * @tree: A double pointer to the root node of the BST to insert the value
 * @value: The value to store in the node to be inserted.
 * Return: A pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *otr, *ntr;

	if (!tree)
		return (NULL);
	
	otr = *tree;
	if (otr == NULL)
	{
		ntr = binary_tree_node(otr, value);
		if (ntr == NULL)
			return (NULL);
		return (*tree = ntr);
	}
	if (value < otr->n)
	{
		if (otr->left != NULL)
			return (bst_insert(&otr->left, value));
		ntr = binary_tree_node(otr, value);
		if (ntr == NULL)
			return (NULL);
		return (otr->left = ntr);
	}
	if (value > otr->n)
	{
		if (otr->right != NULL)
			return (bst_insert(&otr->right, value));
		ntr = binary_tree_node(otr, value);
		if (ntr == NULL)
			return (NULL);
		return (otr->right = ntr);
	}
}
