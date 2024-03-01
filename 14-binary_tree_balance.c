#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: Root of the binary tree to evaluate
 *
 * Return: Integer
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor, left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (-1);
	if (tree->left != NULL && tree->right == NULL)
		return (1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	balance_factor = left_height - right_height;

	return (balance_factor);
}
