/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:03:11 by fgungor           #+#    #+#             */
/*   Updated: 2022/02/23 16:15:44 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//dublicate
char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
