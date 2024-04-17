/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:17:02 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/17 15:17:35 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Function to print memory content
void	print_memory(void *ptr, size_t size)
{
	unsigned char *p = (unsigned char *)ptr;
	for (size_t i = 0; i < size; i++)
		printf("%02X ", p[i]);
	printf("\n");
}


int main(void)
{
	// Test 1: Zeroing out a memory block
	char buffer1[] = "Hello, world!";
	size_t size1 = sizeof(buffer1);
	printf("Test 1: Original content of buffer1: ");
	print_memory(buffer1, size1);
	ft_bzero(buffer1, size1);
	printf("        After ft_bzero:            ");
	print_memory(buffer1, size1);
	printf("\n");

	// Test 2: Zeroing out a memory block with size 0
	char buffer2[] = "Test";
	size_t size2 = 0;
	printf("Test 2: Original content of buffer2: ");
	print_memory(buffer2, size2);
	ft_bzero(buffer2, size2);
	printf("        After ft_bzero:            ");
	print_memory(buffer2, size2);
	printf("\n");

	// Test 3: Zeroing out a memory block with size 1
	char buffer3[] = {'A'};
	size_t size3 = sizeof(buffer3);
	printf("Test 3: Original content of buffer3: ");
	print_memory(buffer3, size3);
	ft_bzero(buffer3, size3);
	printf("        After ft_bzero:            ");
	print_memory(buffer3, size3);
	printf("\n");

	// Test 4: Zeroing out a large memory block
	size_t size4 = 100;
	char *buffer4 = malloc(size4);
	memset(buffer4, 'A', size4);
	printf("Test 4: Original content of buffer4: ");
	print_memory(buffer4, size4);
	ft_bzero(buffer4, size4);
	printf("        After ft_bzero:            ");
	print_memory(buffer4, size4);
	free(buffer4);

	return (0);
}