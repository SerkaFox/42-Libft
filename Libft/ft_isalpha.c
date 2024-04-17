/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:05:58 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 17:30:19 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	// Test 1: Lowercase alphabetic character
	char ch1 = 'a';
	printf("Test 1: Character '%c': ft_isalpha=%d, isalpha=%d\n", ch1, ft_isalpha(ch1), isalpha(ch1));

	// Test 2: Uppercase alphabetic character
	char ch2 = 'Z';
	printf("Test 2: Character '%c': ft_isalpha=%d, isalpha=%d\n", ch2, ft_isalpha(ch2), isalpha(ch2));

	// Test 3: Digit character
	char ch3 = '7';
	printf("Test 3: Character '%c': ft_isalpha=%d, isalpha=%d\n", ch3, ft_isalpha(ch3), isalpha(ch3));

	// Test 4: Non-alphabetic character
	char ch4 = '#';
	printf("Test 4: Character '%c': ft_isalpha=%d, isalpha=%d\n", ch4, ft_isalpha(ch4), isalpha(ch4));

	// Test 5: Space character
	char ch5 = ' ';
	printf("Test 5: Character '%c': ft_isalpha=%d, isalpha=%d\n", ch5, ft_isalpha(ch5), isalpha(ch5));

	// Test 6: Control character
	char ch6 = '\n';
	printf("Test 6: Character '%c': ft_isalpha=%d, isalpha=%d\n", ch6, ft_isalpha(ch6), isalpha(ch6));

	return (0);
}
