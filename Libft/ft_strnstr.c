/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:21:04 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 13:58:34 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack && len >= needle_len)
	{
		if (*haystack == *needle && \
		ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	// Test 1: Finding needle in haystack with exact match
	const char *haystack1 = "Hello, world!";
	const char *needle1 = "world";
	size_t len1 = strlen(haystack1);
	printf("Test 1: Searching for \"%s\" in \"%s\" with length %zu: %s\n", needle1, haystack1, len1, ft_strnstr(haystack1, needle1, len1));

	// Test 2: Finding needle in haystack with partial match
	const char *haystack2 = "This is a test.";
	const char *needle2 = "test";
	size_t len2 = strlen(haystack2);
	printf("Test 2: Searching for \"%s\" in \"%s\" with length %zu: %s\n", needle2, haystack2, len2, ft_strnstr(haystack2, needle2, len2));

	// Test 3: Finding needle in haystack with len less than needle length
	const char *haystack3 = "Example";
	const char *needle3 = "ample";
	size_t len3 = 3;
	printf("Test 3: Searching for \"%s\" in \"%s\" with length %zu: %s\n", needle3, haystack3, len3, ft_strnstr(haystack3, needle3, len3));

	// Test 4: Finding needle in haystack with len equal to 0
	const char *haystack4 = "Test";
	const char *needle4 = "Test";
	size_t len4 = 0;
	printf("Test 4: Searching for \"%s\" in \"%s\" with length %zu: %s\n", needle4, haystack4, len4, ft_strnstr(haystack4, needle4, len4));

	// Test 5: Finding needle in haystack with len greater than haystack length
	const char *haystack5 = "Test";
	const char *needle5 = "Test";
	size_t len5 = 10;
	printf("Test 5: Searching for \"%s\" in \"%s\" with length %zu: %s\n", needle5, haystack5, len5, ft_strnstr(haystack5, needle5, len5));

	// Test 6: Finding needle in haystack with no occurrence
	const char *haystack6 = "Example";
	const char *needle6 = "z";
	size_t len6 = strlen(haystack6);
	printf("Test 6: Searching for \"%s\" in \"%s\" with length %zu: %s\n", needle6, haystack6, len6, ft_strnstr(haystack6, needle6, len6));

	return (0);
}
