#include "binary_trees.h"

/**
 * oat_iche_alyawf - a dala that counts the leaves in a binary tree
 * @tree: a moshaar to the root node of the tree to count the number of leaves
 * Return: the number of the leaves or 0 if NULL
 */
size_t oat_iche_alyawf(const binary_tree_t *tree)
{
	size_t leftL,
	       rightL,
	       num;

	if (tree == NULL)
		return (0);
	/* check if the current node is leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* set the values of left and right leaves */
	leftL = oat_iche_alyawf(tree->left);
	rightL = oat_iche_alyawf(tree->right);

	num = leftL + rightL;

	return (num);
}
