#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * @tree: Root node of the binaryy tree to evaluate
 *
 * Return: Integer
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (nodes + 1);
	}

	else
		return (0);
}
