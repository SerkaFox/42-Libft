/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isanum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:11:15 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 17:30:51 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	// Test 1: Lowercase alphabetic character
	char ch1 = 'a';
	printf("Test 1: Character '%c': ft_isalnum=%d, isalnum=%d\n", ch1, ft_isalnum(ch1), isalnum(ch1));

	// Test 2: Uppercase alphabetic character
	char ch2 = 'Z';
	printf("Test 2: Character '%c': ft_isalnum=%d, isalnum=%d\n", ch2, ft_isalnum(ch2), isalnum(ch2));

	// Test 3: Digit character
	char ch3 = '7';
	printf("Test 3: Character '%c': ft_isalnum=%d, isalnum=%d\n", ch3, ft_isalnum(ch3), isalnum(ch3));

	// Test 4: Non-alphanumeric character
	char ch4 = '#';
	printf("Test 4: Character '%c': ft_isalnum=%d, isalnum=%d\n", ch4, ft_isalnum(ch4), isalnum(ch4));

	// Test 5: Space character
	char ch5 = ' ';
	printf("Test 5: Character '%c': ft_isalnum=%d, isalnum=%d\n", ch5, ft_isalnum(ch5), isalnum(ch5));

	// Test 6: Control character
	char ch6 = '\n';
	printf("Test 6: Character '%c': ft_isalnum=%d, isalnum=%d\n", ch6, ft_isalnum(ch6), isalnum(ch6));

	return (0);
}