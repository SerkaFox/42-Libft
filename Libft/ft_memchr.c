/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:19:59 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 14:14:59 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Test 1: Searching for character 'c' in a block of memory
    char str1[] = "Hello, world!";
    int c1 = 'o';
    size_t n1 = strlen(str1) + 1; // Include null terminator
    printf("Test 1: Searching for character '%c' in \"%s\": %s\n", c1, str1, ft_memchr(str1, c1, n1) ? "Found" : "Not found");

    // Test 2: Searching for character 'c' in a block of memory with null bytes
    char str2[] = "Hello\0, world!";
    int c2 = ',';
    size_t n2 = strlen(str2) + 1; // Include null terminator
    printf("Test 2: Searching for character '%c' in \"%s\": %s\n", c2, str2, ft_memchr(str2, c2, n2) ? "Found" : "Not found");

    // Test 3: Searching for character 'c' in a block of memory where character is not present
    char str3[] = "Hello, world!";
    int c3 = 'z';
    size_t n3 = strlen(str3) + 1; // Include null terminator
    printf("Test 3: Searching for character '%c' in \"%s\": %s\n", c3, str3, ft_memchr(str3, c3, n3) ? "Found" : "Not found");

    // Test 4: Searching for null byte in a block of memory
    char str4[] = "Hello, world!";
    int c4 = '\0';
    size_t n4 = strlen(str4) + 1; // Include null terminator
    printf("Test 4: Searching for null byte in \"%s\": %s\n", str4, ft_memchr(str4, c4, n4) ? "Found" : "Not found");

    // Test 5: Searching for null byte in an empty block of memory
    char str5[] = "";
    int c5 = '\0';
    size_t n5 = strlen(str5) + 1; // Include null terminator
    printf("Test 5: Searching for null byte in an empty string: %s\n", ft_memchr(str5, c5, n5) ? "Found" : "Not found");

    return (0);
}
