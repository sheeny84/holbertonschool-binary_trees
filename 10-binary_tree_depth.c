#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	/* if tree is empty or we have reached the root */
	if (tree == NULL || tree->parent == NULL)
		return (0);

	/* traverse to the root */
	depth = binary_tree_depth(tree->parent);

	/* add one to increment depth for each recursive call */
	return (depth + 1);
}
