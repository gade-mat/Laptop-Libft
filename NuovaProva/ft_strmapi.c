/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:31:33 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/21 16:31:45 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	j;
	char	*omo;

	j = 0;
	if (!s || !f)
		return (NULL);
	omo = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!omo)
		return (NULL);
	while (s[j])
	{
		omo[j] = f(j, s[j]);
		j++;
	}
	omo[j] = '\0';
	return (omo);
}
