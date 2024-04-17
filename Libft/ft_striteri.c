/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:29 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 15:59:49 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	len;
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

#include <stdio.h>

void iterate_function(unsigned int index, char *c)
{
    (void)index;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32; // Convert to uppercase
}

int main(void)
{
    char s[] = "hello, world!";

    // Test 1: Normal iteration with example function
    printf("Test 1: Original string: '%s'\n", s);
    ft_striteri(s, &iterate_function);
    printf("      Modified string: '%s'\n", s);

    // Test 2: NULL input string
    char *s2 = NULL;
    ft_striteri(s2, &iterate_function); // Should not crash

    // Test 3: NULL iteration function
    ft_striteri(s, NULL); // Should not crash

    // Test 4: Empty string
    char s3[] = "";
    printf("Test 4: Original string: '%s'\n", s3);
    ft_striteri(s3, &iterate_function); // Should not change anything
    printf("      Modified string: '%s'\n", s3);

    return (0);
}