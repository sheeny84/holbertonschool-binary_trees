#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	/* if tree is empty */
	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		height_left = 0;
	else
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right == NULL)
		height_right = 0;
	else
		height_right =  1 + binary_tree_height(tree->right);
	return (height_left - height_right);
}
