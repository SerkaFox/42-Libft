/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:17:54 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 14:14:59 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	// Test 1: Lowercase alphabetic character
	char ch1 = 'a';
	printf("Test 1: Character '%c' converted to uppercase: %c\n", ch1, ft_toupper(ch1));

	// Test 2: Uppercase alphabetic character
	char ch2 = 'Z';
	printf("Test 2: Character '%c' converted to uppercase: %c\n", ch2, ft_toupper(ch2));

	// Test 3: Non-alphabetic character
	char ch3 = '#';
	printf("Test 3: Character '%c' remains unchanged: %c\n", ch3, ft_toupper(ch3));

	// Test 4: Digit character
	char ch4 = '7';
	printf("Test 4: Character '%c' remains unchanged: %c\n", ch4, ft_toupper(ch4));

	// Test 5: Space character
	char ch5 = ' ';
	printf("Test 5: Character '%c' remains unchanged: %c\n", ch5, ft_toupper(ch5));

	// Test 6: Control character
	char ch6 = '\n';
	printf("Test 6: Character '%c' remains unchanged: %c\n", ch6, ft_toupper(ch6));

	return (0);
}
