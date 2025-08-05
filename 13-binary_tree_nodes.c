#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of nodes with at least one child in a
 * binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (nodes + 1);
	return (nodes);
}
