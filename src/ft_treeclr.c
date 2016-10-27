#include "ft_tree.h"

/*
** Frees the data pointer of all nodes in the tree and sets them to NULL.
*/

void	ft_treeclr(t_tree *tree)
{
	if (tree->left != NULL)
		ft_treeclr(tree->left);
	if (tree->right != NULL)
		ft_treeclr(tree->right);
	free(tree->data);
	tree->data = NULL;
}
