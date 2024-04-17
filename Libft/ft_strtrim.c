/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:40 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 19:01:58 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

#include <stdio.h>

int main(void)
{
    char *s1 = "   Hello, world!   ";
    char *set = " ";
    char *trimmed;

    // Test 1: Normal trimming
    trimmed = ft_strtrim(s1, set);
    printf("Test 1: Trimmed string: '%s'\n", trimmed);
    free(trimmed);

    // Test 2: Trimming set characters from the beginning and end
    char *s2 = "//////abc//////";
    char *set2 = "/";
    trimmed = ft_strtrim(s2, set2);
    printf("Test 2: Trimmed string: '%s'\n", trimmed);
    free(trimmed);

    // Test 3: All characters are set characters
    char *s3 = "//////";
    char *set3 = "/";
    trimmed = ft_strtrim(s3, set3);
    printf("Test 3: Trimmed string: '%s'\n", trimmed);
    free(trimmed);

    // Test 4: Empty string
    char *s4 = "";
    char *set4 = "/";
    trimmed = ft_strtrim(s4, set4);
    printf("Test 4: Trimmed string: '%s'\n", trimmed);
    free(trimmed);

    // Test 5: NULL input string
    char *s5 = NULL;
    char *set5 = "/";
    trimmed = ft_strtrim(s5, set5);
    printf("Test 5: Trimmed string: '%s'\n", trimmed);
    free(trimmed);

    // Test 6: NULL input set
    char *s6 = "   Hello, world!   ";
    char *set6 = NULL;
    trimmed = ft_strtrim(s6, set6);
    printf("Test 6: Trimmed string: '%s'\n", trimmed);
    free(trimmed);

    return (0);
}