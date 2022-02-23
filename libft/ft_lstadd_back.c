/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:20:08 by fgungor           #+#    #+#             */
/*   Updated: 2022/02/23 14:18:58 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*rtn;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	rtn = ft_lstlast(*lst);
	rtn->next = new;
}
