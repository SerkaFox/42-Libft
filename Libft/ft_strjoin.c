/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:33 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 19:00:03 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, len1);
	ft_memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';
	return (result);
}

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *joined;

    // Test 1: Normal concatenation
    joined = ft_strjoin(s1, s2);
    printf("Test 1: Joined string: '%s'\n", joined);
    free(joined);

    // Test 2: Concatenation with empty s1
    char *s3 = "";
    joined = ft_strjoin(s3, s2);
    printf("Test 2: Joined string: '%s'\n", joined);
    free(joined);

    // Test 3: Concatenation with empty s2
    char *s4 = "Hello, ";
    joined = ft_strjoin(s4, "");
    printf("Test 3: Joined string: '%s'\n", joined);
    free(joined);

    // Test 4: Both strings empty
    joined = ft_strjoin("", "");
    printf("Test 4: Joined string: '%s'\n", joined);
    free(joined);

    // Test 5: NULL input strings
    joined = ft_strjoin(NULL, NULL);
    printf("Test 5: Joined string: '%s'\n", joined);
    free(joined);

    // Test 6: NULL input for s1
    joined = ft_strjoin(NULL, s2);
    printf("Test 6: Joined string: '%s'\n", joined);
    free(joined);

    // Test 7: NULL input for s2
    joined = ft_strjoin(s1, NULL);
    printf("Test 7: Joined string: '%s'\n", joined);
    free(joined);

    return (0);
}