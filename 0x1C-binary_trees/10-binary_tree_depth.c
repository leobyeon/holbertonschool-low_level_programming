#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: the depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_d = 0;
	size_t right_d = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		left_d = 1 + binary_tree_depth(tree->left);
		if (tree->right)
			left_d = 1 + binary_tree_depth(tree->right);
	}
	if (tree->right)
	{
		right_d = 1 + binary_tree_depth(tree->right);
		if (tree->left)
			right_d = 1 + binary_tree_depth(tree->left);
	}
	if (left_d >= right_d)
		return (left_d);

	return (right_d);
}
