/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:23:13 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 14:05:51 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s, len);
	dup[len] = '\0';
	return (dup);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// Test 1: Duplicating non-empty string
	const char *s1 = "Hello, world!";
	char *dup1 = ft_strdup(s1);
	printf("Test 1: Original string: \"%s\", Duplicated string: \"%s\"\n", s1, dup1);
	free(dup1);

	// Test 2: Duplicating empty string
	const char *s2 = "";
	char *dup2 = ft_strdup(s2);
	printf("Test 2: Original string: \"%s\", Duplicated string: \"%s\"\n", s2, dup2);
	free(dup2);

	// Test 3: Duplicating string with null character
	const char *s3 = "Test\0String";
	char *dup3 = ft_strdup(s3);
	printf("Test 3: Original string: \"%s\", Duplicated string: \"%s\"\n", s3, dup3);
	free(dup3);

	// Test 4: Duplicating NULL string
	const char *s4 = NULL;
	char *dup4 = ft_strdup(s4);
	printf("Test 4: Original string: NULL, Duplicated string: \"%s\"\n", dup4);
	free(dup4);

	return (0);
}
