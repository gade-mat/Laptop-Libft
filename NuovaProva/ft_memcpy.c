/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:08:09 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/17 13:48:58 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*b;
	size_t			i;

	if (!dst && !src)
		return (0);
	i = 0;
	s = (unsigned char *)src;
	b = (unsigned char *)dst;
	while (i < n)
	{
		b[i] = s[i];
		i++;
	}
	return (dst);
}
