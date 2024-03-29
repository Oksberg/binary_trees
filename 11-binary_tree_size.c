#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: The root of the tree
 *
 * Return: Integer
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, left_size, right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	size = left_size + right_size + 1;

	return (size);
}
