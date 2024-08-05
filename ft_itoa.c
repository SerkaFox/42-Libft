/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:04 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/26 14:41:47 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	else
	{
		while (n != 0)
		{
			n /= 10;
			count++;
		}
	}
	return (count);
}

static char	*convert_to_string(int n, int len, int sign)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		if (sign < 0)
			str[--len] = '0' - (n % 10);
		else
			str[--len] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int	len;
	int	sign;

	len = count_digits(n);
	if (n < 0)
	{
		sign = -1;
		len++;
	}
	else
	{
		sign = 1;
	}
	return (convert_to_string(n, len, sign));
}
