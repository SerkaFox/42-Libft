/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:50:14 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 13:59:53 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	// Test 1: Empty string
	const char *str1 = "";
	printf("Test 1: Length of \"%s\": %zu\n", str1, ft_strlen(str1));

	// Test 2: String with one character
	const char *str2 = "A";
	printf("Test 2: Length of \"%s\": %zu\n", str2, ft_strlen(str2));

	// Test 3: String with multiple characters
	const char *str3 = "Hello, world!";
	printf("Test 3: Length of \"%s\": %zu\n", str3, ft_strlen(str3));

	// Test 4: String with null character
	const char *str4 = "Test\0String";
	printf("Test 4: Length of \"%s\": %zu\n", str4, ft_strlen(str4));

	// Test 5: Null pointer
	const char *str5 = NULL;
	printf("Test 5: Length of NULL pointer: %zu\n", ft_strlen(str5));

	return (0);
}
