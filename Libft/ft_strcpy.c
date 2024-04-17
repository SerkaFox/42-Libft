/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:16:03 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 15:44:33 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	// Test 1: Copying from source to destination
	char src1[] = "Hello, world!";
	char dest1[20] = "";
	printf("Test 1: Original string: \"%s\", Destination before: \"%s\"\n", src1, dest1);
	printf("After ft_strcpy: \"%s\"\n", ft_strcpy(dest1, src1));

	// Test 2: Copying from source to destination with destination having initial content
	char src2[] = "Hello, world!";
	char dest2[20] = "Bonjour";
	printf("\nTest 2: Original string: \"%s\", Destination before: \"%s\"\n", src2, dest2);
	printf("After ft_strcpy: \"%s\"\n", ft_strcpy(dest2, src2));

	// Test 3: Copying from source to destination with source being an empty string
	char src3[] = "";
	char dest3[20] = "Bonjour";
	printf("\nTest 3: Original string: \"%s\", Destination before: \"%s\"\n", src3, dest3);
	printf("After ft_strcpy: \"%s\"\n", ft_strcpy(dest3, src3));

	// Test 4: Copying from source to destination with destination being an empty string
	char src4[] = "Hello, world!";
	char dest4[20] = "";
	printf("\nTest 4: Original string: \"%s\", Destination before: \"%s\"\n", src4, dest4);
	printf("After ft_strcpy: \"%s\"\n", ft_strcpy(dest4, src4));

	return (0);
}
