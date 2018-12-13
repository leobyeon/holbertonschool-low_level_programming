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

	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_h = 1 + binary_tree_height(tree->right);

	if (left_h >= right_h)
		return (left_h);

	return (right_h);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_l = 0;
	int balance_r = 0;

	if (tree->left)
		balance_l = 1 + binary_tree_height(tree->left);

	if (tree->right)
		balance_r = 1 + binary_tree_height(tree->right);

	return (balance_l - balance_r);
}
