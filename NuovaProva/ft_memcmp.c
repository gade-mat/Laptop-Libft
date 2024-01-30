/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:59:07 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/17 13:59:11 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*sp1;
	const unsigned char		*sp2;

	i = 0;
	sp1 = (const unsigned char *)s1;
	sp2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (sp1[i] == sp2[i])
			i++;
		else
			return (sp1[i] - sp2[i]);
	}
	return (0);
}
