#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

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

	height_left = get_subtree_height(tree, 'l');
	height_right = get_subtree_height(tree, 'r');

	return (height_left - height_right);
}

/**
 * get_subtree_height - measure the height of a subtee
 * @tree: pointer to root node of the tree
 * @direction: 'l' for left or 'r' for right
 *
 * Return: height of the subtree
 */
int get_subtree_height(const binary_tree_t *tree, char direction)
{
	int height = 0;

	if (direction == 'l')
	{
		while (tree->left != NULL)
		{
			tree = tree->left;
			height++;
		}
	}
	else
	{
		while (tree->right != NULL)
		{
			tree = tree->right;
			height++;
		}
	}
	return (height);
}
