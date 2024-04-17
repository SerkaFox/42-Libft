/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:49:26 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 19:13:51 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	total_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i + 1], charset) == 1
			&& check_sep(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	copy_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (check_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	split_words(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(str[i + j], charset) == 0)
				j++;
			array[word] = (char *)malloc(sizeof(char) * (j + 1));
			copy_word(array[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		words;

	words = total_words(str, charset);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	array[words] = 0;
	split_words(array, str, charset);
	return (array);
}

// Function to free the memory allocated for the array returned by ft_split
void	free_split_array(char **split_array)
{
	int i = 0;
	while (split_array[i])
	{
		free(split_array[i]);
		i++;
	}
	free(split_array);
}

// Test function to print the split array
void	print_split_array(char **split_array)
{
	int i = 0;
	while (split_array[i])
	{
		printf("%s\n", split_array[i]);
		i++;
	}
}

int main(void)
{
	char *str1 = "hello,world!";
	char *charset1 = ",";
	char **split_array1 = ft_split(str1, charset1);
	printf("Test 1: Split array for \"%s\" using \"%s\" as separator:\n", str1, charset1);
	print_split_array(split_array1);
	free_split_array(split_array1);

	char *str2 = "This is a test string.";
	char *charset2 = " ";
	char **split_array2 = ft_split(str2, charset2);
	printf("\nTest 2: Split array for \"%s\" using \"%s\" as separator:\n", str2, charset2);
	print_split_array(split_array2);
	free_split_array(split_array2);

	char *str3 = "A-B-C-D";
	char *charset3 = "-";
	char **split_array3 = ft_split(str3, charset3);
	printf("\nTest 3: Split array for \"%s\" using \"%s\" as separator:\n", str3, charset3);
	print_split_array(split_array3);
	free_split_array(split_array3);

	char *str4 = "One;Two;Three;Four";
	char *charset4 = ";";
	char **split_array4 = ft_split(str4, charset4);
	printf("\nTest 4: Split array for \"%s\" using \"%s\" as separator:\n", str4, charset4);
	print_split_array(split_array4);
	free_split_array(split_array4);

	char *str5 = "The,quick,brown,fox,jumps,over,the,lazy,dog";
	char *charset5 = ",";
	char **split_array5 = ft_split(str5, charset5);
	printf("\nTest 5: Split array for \"%s\" using \"%s\" as separator:\n", str5, charset5);
	print_split_array(split_array5);
	free_split_array(split_array5);

	return (0);
}