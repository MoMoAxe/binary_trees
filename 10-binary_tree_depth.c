#include "binary_trees.h"

/**
 * binary_tree_depth - A func that gets the depth of a node in abinary tree
 * @tree: A root node to draw height from for tree
 *
 * Return: Type size_t representing height else 0 on failure or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
