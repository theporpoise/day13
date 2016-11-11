/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:08:08 by mgould            #+#    #+#             */
/*   Updated: 2016/11/11 13:00:52 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*box;

	box = root;
	if (box->left)
	{
		btree_apply_infix(box->left, applyf);
	}
	box->item = applyf(box->item);
	if (box->right)
	{
		btree_apply_infix(box->right, applyf);
	}
	return ;
}
