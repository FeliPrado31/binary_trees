#include "binary_trees.h"

/**
  * binary_tree_is_full - Write a function
  * that checks if a binary tree is perfect
  * @tree: pointer to the root node of the tree to check
  * Return: 1 full
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
