/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:01:15 by fgungor           #+#    #+#             */
/*   Updated: 2022/02/26 16:38:10 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_digitlen(int num)
{
	int	len;

	if (num == 0)
		return (1);
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
	long	fatih;

	fatih = n;
	digit_len = find_digitlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = malloc(sizeof(char) * (digit_len + 1));
	if (!ptr)
		return (NULL);
	ptr[digit_len--] = '\0';
	if (n == 0)
		*ptr = '0';
	else if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		*(ptr + digit_len--) = (n % 10) + '0';
		n /= 10;
	}
	return (ptr);
}
