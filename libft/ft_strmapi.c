/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:17:08 by fgungor           #+#    #+#             */
/*   Updated: 2022/02/26 16:24:52 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		str[i] = f(i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
//yeni oluşturduğumuz str içine fonksiyondan gelen output'u basıyoruz
