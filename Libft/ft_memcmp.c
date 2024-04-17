/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:20:37 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 14:11:52 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr2;
	const unsigned char	*ptr1;

	ptr1 = s1;
	ptr2 = s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Test 1: Comparing equal memory blocks
    char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";
    size_t n1 = strlen(str1) + 1; // Include null terminator
    int result1 = ft_memcmp(str1, str2, n1);
    printf("Test 1: Comparison result: %d\n", result1);

    // Test 2: Comparing memory blocks where s1 < s2
    char str3[] = "Hello, world!";
    char str4[] = "Bonjour, monde!";
    size_t n2 = strlen(str3) + 1; // Include null terminator
    int result2 = ft_memcmp(str3, str4, n2);
    printf("Test 2: Comparison result: %d\n", result2);

    // Test 3: Comparing memory blocks where s1 > s2
    char str5[] = "Bonjour, monde!";
    char str6[] = "Hello, world!";
    size_t n3 = strlen(str5) + 1; // Include null terminator
    int result3 = ft_memcmp(str5, str6, n3);
    printf("Test 3: Comparison result: %d\n", result3);

    // Test 4: Comparing memory blocks with null bytes
    char str7[] = "Hello, world!";
    char str8[] = "Hello\0, world!";
    size_t n4 = strlen(str7) + 1; // Include null terminator
    int result4 = ft_memcmp(str7, str8, n4);
    printf("Test 4: Comparison result: %d\n", result4);

    // Test 5: Comparing memory blocks with different lengths
    char str9[] = "Hello, world!";
    char str10[] = "Hello!";
    size_t n5 = strlen(str9) + 1; // Include null terminator
    int result5 = ft_memcmp(str9, str10, n5);
    printf("Test 5: Comparison result: %d\n", result5);

    return (0);
}
