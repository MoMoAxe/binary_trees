#include "binary_trees.h"

/**
 * binary_tree_preorder - This traverses a tree with a pre-order calling func
 * @tree: A const pointer to root node to begin traversal at
 * @func: A function to call on tree node's data
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
