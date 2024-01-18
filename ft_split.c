/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:57:02 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/18 15:51:04 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   ft_checkword(const char *s, char c)
{
    size_t ret;
    
    ret = 0;
    while (*s)
    {
        if (*s != c)
        {
            ++ret;
            while (*s && *s != c)
                ++s;
        }
        else
            ++s;
    }
    return (ret);
}

void    *free_all(char **s)
{
    size_t  i;

    i = 0;
    while (s[i])
        free (s[i]);
    free (s);
    return (NULL);
}

char    **ft_split(char const *s, char c)
{
    char    **ret;
    size_t  i;
    size_t  len;

    i = 0;
    ret = malloc(sizeof(char *) * (ft_checkword(s, c) + 1));
    if (!ret)
        return (NULL);
    while (*s)
    {
        if (*s != c)
       {
        len = 0;
        while (*s && *s != c && ++len)
            ++s;
        ret[i++] = ft_substr(s - len, 0, len);
        if (!ret[i - 1])
                return (free_all(ret));
       }
       else
            s++;
    }
    ret[i] = 0;
    return (ret);
}