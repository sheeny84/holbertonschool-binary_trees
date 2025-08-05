#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left, height_right;

	/* if tree is empty or we have reached a leaf */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* traverse the left and right subtrees */
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/* return the greater height */
	/* add one to increment height for each recursive call */
	if (height_left > height_right)
		return (height_left + 1);
	return (height_right + 1);
}
