#include "binary_trees.h"

/**
 * binary_tree_height - Write a function that
 * measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: Returns height of node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size;

	if (!tree->left && !tree->right)
		return (0);
	size = getHeight(tree->right, 1);
	if (getHeight(tree->left, 1) > size)
		size = getHeight(tree->left, 1);
	return (size);
}

/**
 * getHeight - Write a function that measures
 * the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * @height: height of tree
 * Return: Returns height of tree
 */
size_t getHeight(const binary_tree_t *tree, size_t height)
{
	size_t right, left;

	if ((!tree) || (!tree->right && !tree->left))
		return (height);
	right = getHeight(tree->right, height++);
	left = getHeight(tree->left, height++);
	if (right > left)
		return (right);
	return (left);
}
