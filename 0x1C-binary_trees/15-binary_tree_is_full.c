#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 if tree is NULL or not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag_l = 0;
	int flag_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		flag_l += binary_tree_is_full(tree->left);

	if (tree->right)
		flag_r += binary_tree_is_full(tree->right);

	if ((flag_l + flag_r) % 2 == 0)
		return (1);

	return (0);
}
