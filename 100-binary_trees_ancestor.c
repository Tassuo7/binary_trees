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
	if (!first || !second || !first->parent || !second->parent)
		return (NULL);
	if (first == second->parent || first == second || first->parent == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);
	return (binary_trees_ancestor(first->parent, second->parent));
}

