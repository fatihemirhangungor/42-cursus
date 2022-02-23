/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:01:15 by fgungor           #+#    #+#             */
/*   Updated: 2022/02/23 16:35:00 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_digitlen(int num)
{
	int	len;

	len = 0;
	if (num < 0)
		len++;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		digit_len;

	digit_len = find_digitlen(n);
	ptr = malloc(sizeof(char) * (digit_len + 1));
	if (!ptr)
		return (NULL);
	if (n == 0)
		*ptr = '0';
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(ptr, "-2147483648", digit_len + 1);
			return (ptr);
		}
		ptr[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		*(ptr + --digit_len) = (n % 10) + '0';
		n /= 10;
	}
	return (ptr);
}
