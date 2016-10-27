#include "ft_tree.h"

/*
** Deletes all nodes in a given tree.
*/

void	ft_treedel(t_tree *tree)
{
	if ((*tree)->left != NULL)
	{
		ft_treedel(&(*tree)->left);
		free((*tree)->left);
	}
	if ((*tree)->right != NULL)
	{
		ft_treedel(&(*tree)->right);
		free((*tree)->right);
	}
}
