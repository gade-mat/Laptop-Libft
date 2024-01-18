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

char	*ft_strdup(const char *s1)
{
    char    *s2;
    int     i;
    int     j;

    i = 0;
    j = ft_strlen(s1);
    s2 = (char *)malloc(sizeof(char) * (j + 1));
    if (!s2)
        return (NULL);
    while (i < j)
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}

// int main(void)
// {
//     const char *original_str = "Hello, World!";

//     // Testiamo ft_strdup
//     char *duplicate_str = ft_strdup(original_str);

//     if (duplicate_str != NULL)
//     {
//         // Stampa la stringa duplicata
//         printf("Stringa originale: %s\n", original_str);
//         printf("Stringa duplicata: %s\n", duplicate_str);

//         // Libera la memoria allocata
//         free(duplicate_str);
//     }
//     else
//     {
//         printf("Errore nell'allocazione della memoria.\n");
//     }

//     return 0;
// }