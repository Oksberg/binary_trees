#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: The root of the tree
 *
 * Return: Integer
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);

	else
	{
		left_size++;
		right_size++;
	}
	if (tree->left != NULL)
	{
		left_size++;
		if (tree->left->left != NULL && tree->left->right != NULL)
			left_size += 2;
		else if (tree->left->left != NULL && tree->left->right == NULL)
			left_size++;
		else if (tree->left->left == NULL && tree->left->right != NULL)
			left_size++;
		else
			return (left_size);
	}

	if (tree->right != NULL)
	{
		right_size++;
		if (tree->right->left != NULL && tree->right->right != NULL)
			right_size += 2;
		else if (tree->right->left != NULL && tree->right->right == NULL)
			right_size++;
		else if (tree->right->left == NULL && tree->right->right != NULL)
			right_size++;
		else
			return (right_size);
	}

		size = left_size + right_size - 1;

	return (size);
}
