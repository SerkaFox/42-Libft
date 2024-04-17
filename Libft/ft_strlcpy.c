/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:17:32 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 14:01:04 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	// Test 1: Copying from source to destination with enough space
	char dst1[20] = "";
	const char *src1 = "Hello, world!";
	size_t size1 = sizeof(dst1);
	size_t result1 = ft_strlcpy(dst1, src1, size1);
	printf("Test 1: Copied string: \"%s\", Length: %zu\n", dst1, result1);

	// Test 2: Copying from source to destination with exact space
	char dst2[14] = "";
	const char *src2 = "Hello, world!";
	size_t size2 = sizeof(dst2);
	size_t result2 = ft_strlcpy(dst2, src2, size2);
	printf("Test 2: Copied string: \"%s\", Length: %zu\n", dst2, result2);

	// Test 3: Copying from source to destination with insufficient space
	char dst3[5] = "";
	const char *src3 = "Hello, world!";
	size_t size3 = sizeof(dst3);
	size_t result3 = ft_strlcpy(dst3, src3, size3);
	printf("Test 3: Copied string: \"%s\", Length: %zu\n", dst3, result3);

	// Test 4: Copying from empty source
	char dst4[20] = "Initial content";
	const char *src4 = "";
	size_t size4 = sizeof(dst4);
	size_t result4 = ft_strlcpy(dst4, src4, size4);
	printf("Test 4: Copied string: \"%s\", Length: %zu\n", dst4, result4);

	// Test 5: Copying to NULL destination
	char *dst5 = NULL;
	const char *src5 = "Hello, world!";
	size_t size5 = 0;
	size_t result5 = ft_strlcpy(dst5, src5, size5);
	printf("Test 5: Copied string: \"%s\", Length: %zu\n", dst5, result5);

	return (0);
}
