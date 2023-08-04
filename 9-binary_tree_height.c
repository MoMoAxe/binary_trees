#include "binary_trees.h"

/**
 * binary_tree_height - This func gets the height of a binary tree
 * @tree: A root node to draw height from for tree
 *
 * Return: Type size_t representing height else 0 on failure or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_size += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_size += 1 + binary_tree_height(tree->right);

	if (left_size > right_size)
		return (left_size);
	else
		return (right_size);
}
