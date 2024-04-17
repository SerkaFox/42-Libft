/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:15:27 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 14:01:58 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	total_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	if (size <= dst_len)
		return (src_len + size);
	i = dst_len;
	while (*src && i < size - 1)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (total_len);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	// Test 1: Concatenating source to destination with enough space
	char dst1[20] = "Hello, ";
	const char *src1 = "world!";
	size_t size1 = sizeof(dst1);
	size_t result1 = ft_strlcat(dst1, src1, size1);
	printf("Test 1: Concatenated string: \"%s\", Length: %zu\n", dst1, result1);

	// Test 2: Concatenating source to destination with exact space
	char dst2[12] = "Hello, ";
	const char *src2 = "world!";
	size_t size2 = sizeof(dst2);
	size_t result2 = ft_strlcat(dst2, src2, size2);
	printf("Test 2: Concatenated string: \"%s\", Length: %zu\n", dst2, result2);

	// Test 3: Concatenating source to destination with insufficient space
	char dst3[10] = "Hello, ";
	const char *src3 = "world!";
	size_t size3 = sizeof(dst3);
	size_t result3 = ft_strlcat(dst3, src3, size3);
	printf("Test 3: Concatenated string: \"%s\", Length: %zu\n", dst3, result3);

	// Test 4: Concatenating to NULL destination
	char *dst4 = NULL;
	const char *src4 = "Hello, world!";
	size_t size4 = 0;
	size_t result4 = ft_strlcat(dst4, src4, size4);
	printf("Test 4: Concatenated string: \"%s\", Length: %zu\n", dst4, result4);

	// Test 5: Concatenating empty source
	char dst5[20] = "Hello, ";
	const char *src5 = "";
	size_t size5 = sizeof(dst5);
	size_t result5 = ft_strlcat(dst5, src5, size5);
	printf("Test 5: Concatenated string: \"%s\", Length: %zu\n", dst5, result5);

	return (0);
}
