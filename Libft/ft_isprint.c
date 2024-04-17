/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:13:30 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 17:31:40 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	// Test 1: Printable character
	char ch1 = 'A';
	printf("Test 1: Character '%c': ft_isprint=%d, isprint=%d\n", ch1, ft_isprint(ch1), isprint(ch1));

	// Test 2: Non-printable character
	char ch2 = '\t'; // Tab character
	printf("Test 2: Character '%c': ft_isprint=%d, isprint=%d\n", ch2, ft_isprint(ch2), isprint(ch2));

	// Test 3: Non-alphanumeric character
	char ch3 = '#';
	printf("Test 3: Character '%c': ft_isprint=%d, isprint=%d\n", ch3, ft_isprint(ch3), isprint(ch3));

	// Test 4: Space character
	char ch4 = ' ';
	printf("Test 4: Character '%c': ft_isprint=%d, isprint=%d\n", ch4, ft_isprint(ch4), isprint(ch4));

	// Test 5: Control character
	char ch5 = '\n';
	printf("Test 5: Character '%c': ft_isprint=%d, isprint=%d\n", ch5, ft_isprint(ch5), isprint(ch5));

	return (0);
}
