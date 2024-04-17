/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:13:00 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 15:57:37 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	// Test 1: ASCII character
	char ch1 = 'A';
	printf("Test 1: Character '%c': ft_isascii=%d, isascii=%d\n", ch1, ft_isascii(ch1), isascii(ch1));

	// Test 2: Non-ASCII character
	unsigned char ch2 = 245; // Random non-ASCII character
	printf("Test 2: Character with ASCII value %d: ft_isascii=%d, isascii=%d\n", ch2, ft_isascii(ch2), isascii(ch2));

	// Test 3: Control character
	char ch3 = '\n';
	printf("Test 3: Character '%c': ft_isascii=%d, isascii=%d\n", ch3, ft_isascii(ch3), isascii(ch3));

	return (0);
}
