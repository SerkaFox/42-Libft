/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:16:44 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 14:09:25 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*lasts;
	unsigned char		*lastd;

	d = dst;
	s = src;
	if (dst < src)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		lasts = (unsigned char *)src + (len - 1);
		lastd = (unsigned char *)dst + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dst);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Test 1: Moving memory from source to destination
    char str1[20] = "Hello, world!";
    char dest1[20] = "";
    size_t len1 = strlen(str1) + 1; // Include null terminator
    printf("Test 1: Original string: \"%s\", Destination before: \"%s\"\n", str1, dest1);
    ft_memmove(dest1, str1, len1);
    printf("After ft_memmove: \"%s\"\n", dest1);

    // Test 2: Moving memory from source to destination with overlapping regions
    char str2[20] = "Hello, world!";
    char dest2[20] = "Bonjour";
    size_t len2 = strlen(str2) + 1; // Include null terminator
    printf("\nTest 2: Original string: \"%s\", Destination before: \"%s\"\n", str2, dest2);
    ft_memmove(dest2 + 5, dest2, len2);
    printf("After ft_memmove: \"%s\"\n", dest2);

    // Test 3: Moving memory from source to destination with destination starting before source
    char str3[20] = "Hello, world!";
    char dest3[20] = "Bonjour";
    size_t len3 = strlen(str3) + 1; // Include null terminator
    printf("\nTest 3: Original string: \"%s\", Destination before: \"%s\"\n", str3, dest3);
    ft_memmove(dest3, dest3 + 3, len3);
    printf("After ft_memmove: \"%s\"\n", dest3);

    // Test 4: Moving memory from source to destination with destination starting after source
    char str4[20] = "Hello, world!";
    char dest4[20] = "Bonjour";
    size_t len4 = strlen(str4) + 1; // Include null terminator
    printf("\nTest 4: Original string: \"%s\", Destination before: \"%s\"\n", str4, dest4);
    ft_memmove(dest4 + 5, dest4, len4);
    printf("After ft_memmove: \"%s\"\n", dest4);

    return (0);
}
