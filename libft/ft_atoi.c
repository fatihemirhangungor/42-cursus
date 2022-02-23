/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:20:18 by fgungor           #+#    #+#             */
/*   Updated: 2022/02/23 16:14:50 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	isaret;
	int	toplam;

	i = 0;
	isaret = 1;
	toplam = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			isaret *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		toplam = toplam * 10 + (str[i] - 48);
		i++;
	}
	return (toplam * isaret);
}
