#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: The node whose uncle to find
 *
 * Return: Pointer
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)

{
	binary_tree_t *uncle;

	if (node == NULL)
		return (NULL);

	if (node->parent != NULL)
	{
		if (node->parent->parent != NULL)
		{
			if (node->parent == node->parent->parent->left)
			{
				uncle = node->parent->parent->right;
				if (node->parent->parent->right == NULL)
					return (NULL);
			}
			if (node->parent == node->parent->parent->right)
			{
				uncle = node->parent->parent->
left;
				if (node->parent->parent->left == NULL)
					return (NULL);
			}
			return (uncle);

		}
	}

	return (NULL);
}
