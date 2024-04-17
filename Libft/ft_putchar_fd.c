/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:10 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 15:19:17 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#include <stdio.h>

int main(void)
{
	// Test 1: Printing a character to standard output
	char ch1 = 'A';
	int fd1 = 1; // File descriptor 1 represents standard output (stdout)
	printf("Test 1: Printing character '%c' to standard output:\n", ch1);
	ft_putchar_fd(ch1, fd1);
	printf("\n");

	return (0);
}