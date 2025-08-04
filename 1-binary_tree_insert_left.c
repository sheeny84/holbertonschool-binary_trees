#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: pointer to the parent node of the left-child to be inserted
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* set value, parent, and right child of new_node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	/* set the parent to link to the new node */
	if (parent != NULL)
	{
		if (parent->left == NULL) /* assign the left child first */
			parent->left = new_node;
		else /* left child already exists */
		{
			new_node->left = parent->left;
			parent->left = new_node;
			(new_node->left)->parent = new_node;
		}
	}

	return (new_node);
}
