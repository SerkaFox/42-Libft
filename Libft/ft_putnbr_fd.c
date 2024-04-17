/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:19 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 15:20:23 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (!str)
		return ;
	ft_putstr_fd(str, fd);
	free(str);
}

#include <stdio.h>

int main(void)
{
	// Test 1: Printing positive integer to standard output
	int num1 = 123;
	int fd1 = 1; // File descriptor 1 represents standard output (stdout)
	printf("Test 1: Printing %d to standard output:\n", num1);
	ft_putnbr_fd(num1, fd1);
	printf("\n");

	// Test 2: Printing negative integer to standard output
	int num2 = -456;
	int fd2 = 1; // File descriptor 1 represents standard output (stdout)
	printf("Test 2: Printing %d to standard output:\n", num2);
	ft_putnbr_fd(num2, fd2);
	printf("\n");

	// Test 3: Printing zero to standard output
	int num3 = 0;
	int fd3 = 1; // File descriptor 1 represents standard output (stdout)
	printf("Test 3: Printing %d to standard output:\n", num3);
	ft_putnbr_fd(num3, fd3);
	printf("\n");

	return (0);
}