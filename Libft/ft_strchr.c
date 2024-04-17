/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:18:42 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 14:07:30 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    // Test 1: Searching for character 'c' in a string
    const char *str1 = "Hello, world!";
    char c1 = 'o';
    printf("Test 1: Searching for character '%c' in \"%s\": %s\n", c1, str1, ft_strchr(str1, c1) ? ft_strchr(str1, c1) : "Not found");

    // Test 2: Searching for character 'c' in a string with null terminator
    const char *str2 = "This is a test.";
    char c2 = '\0';
    printf("Test 2: Searching for null terminator in \"%s\": %s\n", str2, ft_strchr(str2, c2) ? ft_strchr(str2, c2) : "Not found");

    // Test 3: Searching for character 'c' in a string with no occurrence
    const char *str3 = "Example";
    char c3 = 'z';
    printf("Test 3: Searching for character '%c' in \"%s\": %s\n", c3, str3, ft_strchr(str3, c3) ? ft_strchr(str3, c3) : "Not found");

    // Test 4: Searching for null byte in a string
    const char *str4 = "Test\0String";
    char c4 = '\0';
    printf("Test 4: Searching for null byte in \"%s\": %s\n", str4, ft_strchr(str4, c4) ? ft_strchr(str4, c4) : "Not found");

    // Test 5: Searching for null byte in an empty string
    const char *str5 = "";
    char c5 = '\0';
    printf("Test 5: Searching for null byte in an empty string: %s\n", ft_strchr(str5, c5) ? ft_strchr(str5, c5) : "Not found");

    return (0);
}
