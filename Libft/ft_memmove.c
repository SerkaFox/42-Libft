/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssvitkin <ssvitkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:16:44 by ssvitkin          #+#    #+#             */
/*   Updated: 2024/04/08 17:40:06 by ssvitkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*lasts;
	unsigned char		*lastd;

	d = dst;
	s = src;
	if (dst < src)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		lasts = (unsigned char *)src + (len - 1);
		lastd = (unsigned char *)dst + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dst);
}
