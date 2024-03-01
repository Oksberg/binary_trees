#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: The node whose sibling to find
 *
 * Return: Pointer
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL)
		return (NULL);

	if (node->parent != NULL)
	{
		if (node == node->parent->left)
		{
			sibling = node->parent->right;
			if (node->parent->right == NULL)
				return (NULL);
		}
		if (node == node->parent->right)
		{
			sibling = node->parent->left;
			if (node->parent->left == NULL)
				return (NULL);
		}
		return (sibling);
	}

	return (NULL);
}
