#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: pointer to the parent node of the right-child to be inserted
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* set value, parent, and children of new_node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	/* set the parent to link to the new node */
	if (parent != NULL)
	{
		if (parent->right == NULL) /* parent has no right child */
			parent->right = new_node;
		else /* right child already exists */
		{
			new_node->right = parent->right;
			parent->right = new_node;
			(new_node->right)->parent = new_node;
		}
	}
	else
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
