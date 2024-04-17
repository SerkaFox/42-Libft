/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:04 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 19:21:57 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_str(char *str, int n, int len)
{
	str[len] = '\0';
	while (len--)
	{
		if (n < 0)
			str[len] = (n % 10) * -1 + '0';
		else
			str[len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = get_len(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		fill_str(str + 1, n, len - 1);
	}
	else
		fill_str(str, n, len);
	return (str);
}

#include <stdio.h>

// Function prototype for ft_itoa
char	*ft_itoa(int n);

int main(void)
{
	// Test 1: Positive integer
	int num1 = 123;
	printf("Test 1: Integer %d as string: %s\n", num1, ft_itoa(num1));

	// Test 2: Negative integer
	int num2 = -456;
	printf("Test 2: Integer %d as string: %s\n", num2, ft_itoa(num2));

	// Test 3: Zero
	int num3 = 0;
	printf("Test 3: Integer %d as string: %s\n", num3, ft_itoa(num3));

	// Test 4: Maximum positive integer value
	int num4 = 2147483647;
	printf("Test 4: Integer %d as string: %s\n", num4, ft_itoa(num4));

	// Test 5: Minimum negative integer value
	int num5 = -2147483648;
	printf("Test 5: Integer %d as string: %s\n", num5, ft_itoa(num5));

	return (0);
}