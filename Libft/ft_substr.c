/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:43 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 19:07:57 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

#include <stdio.h>

int main(void)
{
    char *s = "Hello, world!";
    char *sub;

    // Test 1: Normal substring extraction
    sub = ft_substr(s, 7, 5);
    printf("Test 1: Substring from index 7 with length 5: %s\n", sub);
    free(sub);

    // Test 2: Substring starting from beginning
    sub = ft_substr(s, 0, 5);
    printf("Test 2: Substring from index 0 with length 5: %s\n", sub);
    free(sub);

    // Test 3: Substring starting beyond string length
    sub = ft_substr(s, 15, 5);
    printf("Test 3: Substring from index 15 with length 5: %s\n", sub);
    free(sub);

    // Test 4: Substring with length longer than remaining string
    sub = ft_substr(s, 7, 20);
    printf("Test 4: Substring from index 7 with length 20: %s\n", sub);
    free(sub);

    // Test 5: NULL string input
    sub = ft_substr(NULL, 0, 5);
    printf("Test 5: Substring from NULL string: %s\n", sub);
    free(sub);

    return (0);
}