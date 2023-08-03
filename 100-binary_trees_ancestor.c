#include "binary_trees.h"
/**
 * binary_trees_ancestor -  a function that finds
 * the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: Null or pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first == second->parent || !first->parent ||
			(!first->parent->parent && second->parent))
		return (binary_trees_ancestor(first, second->parent));
	else
		return (binary_trees_ancestor(first->parent, second));
	return (binary_trees_ancestor(first->parent, second->parent));
}

