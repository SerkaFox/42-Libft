/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:22:51 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 17:29:24 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

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
	// Test 1: Allocating memory for an array of integers
	size_t nmemb1 = 5;
	size_t size1 = sizeof(int);
	int *array1 = (int *)ft_calloc(nmemb1, size1);
	printf("Test 1: Allocated memory for array of %zu integers\n", nmemb1);
	printf("        Initial content of array1:\n");
	for (size_t i = 0; i < nmemb1; i++)
		printf("%d ", array1[i]);
	printf("\n\n");
	free(array1);

	// Test 2: Allocating memory for an array of characters
	size_t nmemb2 = 10;
	size_t size2 = sizeof(char);
	char *array2 = (char *)ft_calloc(nmemb2, size2);
	printf("Test 2: Allocated memory for array of %zu characters\n", nmemb2);
	printf("        Initial content of array2:\n");
	for (size_t i = 0; i < nmemb2; i++)
		printf("%c ", array2[i]);
	printf("\n\n");
	free(array2);

	// Test 3: Allocating memory for a large array
	size_t nmemb3 = 1000;
	size_t size3 = sizeof(double);
	double *array3 = (double *)ft_calloc(nmemb3, size3);
	printf("Test 3: Allocated memory for array of %zu doubles\n", nmemb3);
	// Omitting print of initial content of array3 due to its size
	printf("\n");
	free(array3);

	return (0);
}
