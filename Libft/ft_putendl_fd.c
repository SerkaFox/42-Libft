/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:15 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 18:55:03 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

#include <unistd.h>

int main(void)
{
	// Test 1: Printing a string with a newline to standard output
	char *str1 = "Hello, world!";
	int fd1 = 1; // File descriptor 1 represents standard output (stdout)
	printf("Test 1: Printing \"%s\" with a newline to standard output:\n", str1);
	ft_putendl_fd(str1, fd1);

	// Test 2: Printing a NULL string with a newline to standard output
	char *null_str = NULL;
	printf("\nTest 2: Printing NULL string with a newline to standard output:\n");
	ft_putendl_fd(null_str, fd1);

	// Test 3: Printing an empty string with a newline to standard output
	char *empty_str = "";
	printf("\nTest 3: Printing empty string with a newline to standard output:\n");
	ft_putendl_fd(empty_str, fd1);

	// Test 4: Printing a string with a newline to a file descriptor for a file (requires appropriate file setup)
	// Replace 'fd' with an appropriate file descriptor value
	// char *str2 = "This is a test.";
	// int fd2 = <file_descriptor_for_file>;
	// ft_putendl_fd(str2, fd2);

	return (0);
}