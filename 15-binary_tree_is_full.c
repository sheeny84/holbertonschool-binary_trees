#include <stdlib.h>
#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL || tree->right == NULL)
		return (0);

	if (binary_tree_is_leaf(tree->left) &&
			binary_tree_is_leaf(tree->right))
		return (1);

	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

	return (0);
}
