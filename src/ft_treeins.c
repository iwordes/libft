#include "ft_data.h"

void	ft_treeins(t_tree *tree, void *data, int (*cmp)(void*, void*))
{
	int		outcome;

	if (tree != NULL && cmp != NULL)
		while (tree->left != NULL || tree->right != NULL)
		{
			if ((outcome = cmp(data, tree->data)) <= 0)
			{
				if (tree->left != NULL)
					tree = tree->left;
				else
				{
					tree->left = ft_treenew(data);
					return ;
				}
			}
			else
			{
				if (tree->right != NULL)
					tree = tree->right;
				else
				{
					tree->right = ft_treenew(data);
					return ;
				}
			}
		}
}
