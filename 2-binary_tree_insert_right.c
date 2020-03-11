#include "binary_trees.h"

/**
 * binary_tree_insert_right - Write a function that
 * inserts a node as the right-child of another node
 *
 * @parent: parent node to insert at
 * @value: value to insert
 * Return: Returns the new node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right = node;
		(node->right)->parent = node;
	}
	return (node);
}
