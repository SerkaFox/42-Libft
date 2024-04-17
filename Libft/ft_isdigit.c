/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:06:23 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 17:31:24 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	// Test 1: Digit character
	char ch1 = '7';
	printf("Test 1: Character '%c': ft_isdigit=%d, isdigit=%d\n", ch1, ft_isdigit(ch1), isdigit(ch1));

	// Test 2: Alphabetic character
	char ch2 = 'A';
	printf("Test 2: Character '%c': ft_isdigit=%d, isdigit=%d\n", ch2, ft_isdigit(ch2), isdigit(ch2));

	// Test 3: Non-alphanumeric character
	char ch3 = '#';
	printf("Test 3: Character '%c': ft_isdigit=%d, isdigit=%d\n", ch3, ft_isdigit(ch3), isdigit(ch3));

	// Test 4: Space character
	char ch4 = ' ';
	printf("Test 4: Character '%c': ft_isdigit=%d, isdigit=%d\n", ch4, ft_isdigit(ch4), isdigit(ch4));

	// Test 5: Control character
	char ch5 = '\n';
	printf("Test 5: Character '%c': ft_isdigit=%d, isdigit=%d\n", ch5, ft_isdigit(ch5), isdigit(ch5));

	return (0);
}
