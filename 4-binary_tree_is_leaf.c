#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Write a function that checks if a node is a leaf
 * @node: pointer to check
 * Return: 1 if is a leaf, and 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right || node->left)
		return (0);
	return (1);
}
