/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:50:32 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/17 13:50:33 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy (char *dst, const char *src, size_t dstsize)
{
    size_t  i;

    i = 0;
    if ((!dst || !src) && !dstsize)
            return (i);
    if (dstsize > 0)
    {
            while (i < dstsize - 1 && src[i])
            {
                    dst[i] = src[i];
                    i++;
            }
            dst[i] = '\0';
    }
    while (src[i])
            i++;
    return (i);
}