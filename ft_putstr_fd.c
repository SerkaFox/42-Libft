/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:23 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 18:56:01 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

#include <stdio.h>
#include <unistd.h>

// Function prototype for ft_putstr_fd
void	ft_putstr_fd(char *s, int fd);

int main(void)
{
	char *str = "Hello, world!";
	int fd = 1; // File descriptor 1 represents standard output (stdout)

	// Test 1: Printing a string to standard output
	printf("Test 1: Printing \"%s\" to standard output:\n", str);
	ft_putstr_fd(str, fd);
	printf("\n");

	// Test 2: Printing a NULL string to standard output
	char *null_str = NULL;
	printf("Test 2: Printing NULL string to standard output:\n");
	ft_putstr_fd(null_str, fd);
	printf("\n");

	// Test 3: Printing an empty string to standard output
	char *empty_str = "";
	printf("Test 3: Printing empty string to standard output:\n");
	ft_putstr_fd(empty_str, fd);
	printf("\n");

	return (0);
}