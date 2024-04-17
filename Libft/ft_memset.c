/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:14:10 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 16:19:26 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = (unsigned char)c;
	return (s);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Test 1: Filling a block of memory with character 'c'
    char str1[20] = "Hello, world!";
    int c1 = '.';
    size_t n1 = 5;
    printf("Test 1: Original string: \"%s\"\n", str1);
    printf("After ft_memset: \"%s\"\n", (char *)ft_memset(str1, c1, n1));

    // Test 2: Filling a block of memory with character 'c' when n > strlen(s)
    char str2[20] = "Hello, world!";
    int c2 = '!';
    size_t n2 = 15;
    printf("\nTest 2: Original string: \"%s\"\n", str2);
    printf("After ft_memset: \"%s\"\n", (char *)ft_memset(str2, c2, n2));

    // Test 3: Filling a block of memory with null bytes
    char str3[20] = "";
    int c3 = '\0';
    size_t n3 = 10;
    printf("\nTest 3: Original string: \"%s\"\n", str3);
    printf("After ft_memset: \"%s\"\n", (char *)ft_memset(str3, c3, n3));

    // Test 4: Filling a block of memory with non-ASCII character
    char str4[20] = "";
    int c4 = 128; // Non-ASCII character
    size_t n4 = 10;
    printf("\nTest 4: Original string: \"%s\"\n", str4);
    printf("After ft_memset: \"%s\"\n", (char *)ft_memset(str4, c4, n4));

    return (0);
}
