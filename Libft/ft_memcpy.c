/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:04:14 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 14:09:59 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Test 1: Copying from source to destination
    char src1[] = "Hello, world!";
    char dest1[20] = "";
    size_t n1 = strlen(src1) + 1; // Include null terminator
    printf("Test 1: Original string: \"%s\", Destination before: \"%s\"\n", src1, dest1);
    ft_memcpy(dest1, src1, n1);
    printf("After ft_memcpy: \"%s\"\n", dest1);

    // Test 2: Copying from source to destination with overlapping regions
    char str2[20] = "Hello, world!";
    char dest2[20] = "Bonjour";
    size_t n2 = strlen(str2) + 1; // Include null terminator
    printf("\nTest 2: Original string: \"%s\", Destination before: \"%s\"\n", str2, dest2);
    ft_memcpy(dest2 + 5, dest2, n2);
    printf("After ft_memcpy: \"%s\"\n", dest2);

    // Test 3: Copying from source to destination with destination starting before source
    char src3[] = "Hello, world!";
    char dest3[20] = "Bonjour";
    size_t n3 = strlen(src3) + 1; // Include null terminator
    printf("\nTest 3: Original string: \"%s\", Destination before: \"%s\"\n", src3, dest3);
    ft_memcpy(dest3, dest3 + 3, n3);
    printf("After ft_memcpy: \"%s\"\n", dest3);

    // Test 4: Copying from source to destination with destination starting after source
    char src4[] = "Hello, world!";
    char dest4[20] = "Bonjour";
    size_t n4 = strlen(src4) + 1; // Include null terminator
    printf("\nTest 4: Original string: \"%s\", Destination before: \"%s\"\n", src4, dest4);
    ft_memcpy(dest4 + 5, src4, n4);
    printf("After ft_memcpy: \"%s\"\n", dest4);

    return (0);
}
