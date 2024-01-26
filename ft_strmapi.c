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

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    size_t  j;
    char    *str;

    i = 0;
    if (!s || !f)
        return (0);
    j = ft_strlen(s);
    if (!(str = (char *)malloc(sizeof(char *) + j + 1)))
        return(0);
    while (i < j)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = 0;
    return (str);
}