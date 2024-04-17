/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:36 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 16:00:04 by ssvitkin         ###   ########.fr       */
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

// Функция отображения для теста 2
char map_function2(unsigned int index, char c)
{
	(void)index;
    return c;
}

#include <stdio.h>

int main(void)
{
    char *s = "Hello, world!";
    char *mapped;

    // Test 1: Обычное отображение с примерной функцией
    mapped = ft_strmapi(s, &map_function2);
    printf("Test 1: Преобразованная строка: '%s'\n", mapped);
    free(mapped);

    // Test 3: Пустая входная строка
    mapped = ft_strmapi(NULL, &map_function2);
    printf("Test 3: Преобразованная строка: '%s'\n", mapped);
    free(mapped);

    // Test 4: Нет функции отображения
    mapped = ft_strmapi(s, NULL);
    printf("Test 4: Преобразованная строка: '%s'\n", mapped);
    free(mapped);

    return (0);
}
