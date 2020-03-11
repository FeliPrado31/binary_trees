#include "binary_trees.h"

/**
 * binary_tree_is_root - Write a function that checks if a given node is a root
 * @node: node to check
 * Return: Returns 1 if a root, 0 if null
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
