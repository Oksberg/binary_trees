#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: The root node of the tree to evaluate
 *
 * Return: Integer
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, left_leaves, right_leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	leaves = left_leaves + right_leaves;

	return (leaves);
}
