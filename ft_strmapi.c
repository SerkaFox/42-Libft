/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:36 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 19:16:50 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

#include <stdio.h>

// Example mapping function: increment ASCII value by 1
char map_function(unsigned int index, char c)
{
    return c + 1;
}

int main(void)
{
    char *s = "Hello, world!";
    char *mapped;

    // Test 1: Normal mapping with example function
    mapped = ft_strmapi(s, &map_function);
    printf("Test 1: Mapped string: '%s'\n", mapped);
    free(mapped);

    // Test 2: Mapping with function returning unchanged characters
    char *s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char map_function2(unsigned int index, char c)
    {
        return c;
    }
    mapped = ft_strmapi(s2, &map_function2);
    printf("Test 2: Mapped string: '%s'\n", mapped);
    free(mapped);

    // Test 3: NULL input string
    mapped = ft_strmapi(NULL, &map_function);
    printf("Test 3: Mapped string: '%s'\n", mapped);
    free(mapped);

    // Test 4: NULL mapping function
    mapped = ft_strmapi(s, NULL);
    printf("Test 4: Mapped string: '%s'\n", mapped);
    free(mapped);

    return (0);
}