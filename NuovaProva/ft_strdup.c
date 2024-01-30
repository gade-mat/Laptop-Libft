/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:08:23 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/18 16:25:54 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	j;
	char	*fium;

	i = 0;
	j = (ft_strlen(s) + 1);
	fium = (char *)malloc(sizeof(char) * (j + 1));
	if (!fium)
		return (NULL);
	while (i < j)
	{
		fium[i] = s[i];
		i++;
	}
	return (fium);
}
