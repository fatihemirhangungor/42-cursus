/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:50:17 by fgungor           #+#    #+#             */
/*   Updated: 2022/02/23 17:46:08 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//allocates the requested memory and returns a pointer to it
//calloc sets allocated memory to zero
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
