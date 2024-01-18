/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:08:19 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/18 16:26:08 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char ch;
    size_t slen;
    size_t i;

    i = 0;
    ch = (char)c;
    slen = ft_strlen(s);
    while (i <= slen)
    {
        if (s[i] == ch)
            return ((char *)&s[i]);
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char stringa[] = "Ciao, mondo!";
//     char carattere = 'o';

//     // Utilizza strchr per trovare la prima occorrenza di 'o' nella stringa
//     char *posizione = ft_strchr(stringa, carattere);

//     if (posizione != NULL)
//     {
//         printf("Il carattere '%c' si trova alla posizione %ld nella stringa.\n", carattere, posizione - stringa);
//     }
//     else
//     {
//         printf("Il carattere '%c' non è stato trovato nella stringa.\n", carattere);
//     }
//     return 0;
// }