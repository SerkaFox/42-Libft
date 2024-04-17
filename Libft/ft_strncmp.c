/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:19:39 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 13:59:20 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	// Test 1: Comparing equal strings
	const char *s1_1 = "Hello, world!";
	const char *s2_1 = "Hello, world!";
	size_t n1 = strlen(s1_1);
	printf("Test 1: Comparing \"%s\" with \"%s\" for %zu characters: %d\n", s1_1, s2_1, n1, ft_strncmp(s1_1, s2_1, n1));

	// Test 2: Comparing strings with different lengths
	const char *s1_2 = "Hello";
	const char *s2_2 = "Hello, world!";
	size_t n2 = strlen(s1_2);
	printf("Test 2: Comparing \"%s\" with \"%s\" for %zu characters: %d\n", s1_2, s2_2, n2, ft_strncmp(s1_2, s2_2, n2));

	// Test 3: Comparing strings with different characters
	const char *s1_3 = "Hello, world!";
	const char *s2_3 = "Hallo, world!";
	size_t n3 = strlen(s1_3);
	printf("Test 3: Comparing \"%s\" with \"%s\" for %zu characters: %d\n", s1_3, s2_3, n3, ft_strncmp(s1_3, s2_3, n3));

	// Test 4: Comparing strings with equal prefix
	const char *s1_4 = "Hello";
	const char *s2_4 = "Hello, world!";
	size_t n4 = 5;
	printf("Test 4: Comparing \"%s\" with \"%s\" for %zu characters: %d\n", s1_4, s2_4, n4, ft_strncmp(s1_4, s2_4, n4));

	// Test 5: Comparing empty strings
	const char *s1_5 = "";
	const char *s2_5 = "";
	size_t n5 = 0;
	printf("Test 5: Comparing \"%s\" with \"%s\" for %zu characters: %d\n", s1_5, s2_5, n5, ft_strncmp(s1_5, s2_5, n5));

	return (0);
}
