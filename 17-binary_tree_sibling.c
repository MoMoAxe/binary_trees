#include "binary_trees.h"

/**
 * binary_tree_sibling - This func finds the sibling of a node
 * @node: Node to find sibling for
 * Return: Pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
