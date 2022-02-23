/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:42:39 by fgungor           #+#    #+#             */
/*   Updated: 2022/02/23 16:30:48 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    kelime_sayisi(const char *str, char c)
{
    int i;
    int trigger;

    i = 0;
    trigger = 0;
    while (*str)
    {
        if (*str != c && trigger == 0)
        {
            trigger = 1;
            i++;
        }
        else if (*str == c)
            trigger = 0;
        str++;
    }
    return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**kelimeler;
	size_t	i;
	size_t	kelime_harf_index;

	if (!s)
		return (NULL);
	kelimeler = (char **)malloc(sizeof(char *) * (kelime_sayisi(s, c) + 1));
	if (!kelimeler)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			kelime_harf_index = 0;
			while (*s != c && *s && ++kelime_harf_index)
				s++;
			kelimeler[i++] = malloc(sizeof(char) * (kelime_harf_index + 1));
			ft_strlcpy(kelimeler[i], s - kelime_harf_index, kelime_harf_index + 1);
		}
	}
	return (kelimeler);
}
