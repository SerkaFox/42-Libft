/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:21:47 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 17:26:17 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

#include <stdio.h>

int main(void)
{
	// Test 1: Positive integer
	const char *str1 = "123";
	printf("Test 1: String \"%s\" converted to integer: %d\n", str1, ft_atoi(str1));

	// Test 2: Negative integer
	const char *str2 = "-456";
	printf("Test 2: String \"%s\" converted to integer: %d\n", str2, ft_atoi(str2));

	// Test 3: Zero
	const char *str3 = "0";
	printf("Test 3: String \"%s\" converted to integer: %d\n", str3, ft_atoi(str3));

	// Test 4: Maximum positive integer value
	const char *str4 = "2147483647";
	printf("Test 4: String \"%s\" converted to integer: %d\n", str4, ft_atoi(str4));

	// Test 5: Minimum negative integer value
	const char *str5 = "-2147483648";
	printf("Test 5: String \"%s\" converted to integer: %d\n", str5, ft_atoi(str5));

	// Test 6: Integer with leading spaces
	const char *str6 = "   789";
	printf("Test 6: String \"%s\" converted to integer: %d\n", str6, ft_atoi(str6));

	// Test 7: Integer with trailing characters
	const char *str7 = "123abc";
	printf("Test 7: String \"%s\" converted to integer: %d\n", str7, ft_atoi(str7));

	// Test 8: Integer with leading sign and spaces
	const char *str8 = "+456";
	printf("Test 8: String \"%s\" converted to integer: %d\n", str8, ft_atoi(str8));

	// Test 9: Empty string
	const char *str9 = "";
	printf("Test 9: String \"%s\" converted to integer: %d\n", str9, ft_atoi(str9));

	// Test 10: String with non-numeric characters only
	const char *str10 = "abc";
	printf("Test 10: String \"%s\" converted to integer: %d\n", str10, ft_atoi(str10));

	return (0);
}