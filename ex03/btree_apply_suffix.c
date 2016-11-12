/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:10:54 by mgould            #+#    #+#             */
/*   Updated: 2016/11/11 17:25:24 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*box;

	box = root;
	if (box->left)
	{
		btree_apply_suffix(box->left, applyf);
	}
	if (box->right)
	{
		btree_apply_suffix(box->right, applyf);
	}
	applyf(box->item);
	return ;
}
