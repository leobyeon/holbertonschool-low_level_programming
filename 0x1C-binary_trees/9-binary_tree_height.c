#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_h = 1 + binary_tree_height(tree->left);
	right_h = 1 + binary_tree_height(tree->right);

	if (left_h >= right_h)
		return (left_h);

	return (right_h);
}
