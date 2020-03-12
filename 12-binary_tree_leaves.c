#include "binary_trees.h"
/**
  * binary_tree_leaves - Write a function that measures the size of a binary tree
  * @tree: pointer to the root node of the tree to measure the size
  * Return: number of leaf nodes
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));

}
