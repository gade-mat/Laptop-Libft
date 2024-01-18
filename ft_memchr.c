/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:08:01 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/16 15:35:08 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t      i;
    unsigned char   b;
    const unsigned char     *d;

    i = 0,
    b = (unsigned char)c;
    d = (const unsigned char *)str;
    while (i < n)
    {
        if (d[i] == b)
                return ((void *)(&str[i]));
        i++;
    }
    return (NULL);
}