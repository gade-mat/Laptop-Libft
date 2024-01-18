/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:08:48 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/18 17:08:49 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void    *ft_memset(void *b, int c, size_t len)
{
        size_t  i;
        unsigned char    *str;

        i = 0;
        str = (unsigned char *)b;
        while (i < len)
        {
                str[i] = (unsigned char) c;
                i++;
        }
        return(b);
}
