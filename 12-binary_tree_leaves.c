#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves in a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: size of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (tree == NULL)
		return (0);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	
	if (tree->left == NULL && tree->right == NULL)
		return (1 + leaves);
	return (leaves);
}
