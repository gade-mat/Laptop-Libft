/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:08:59 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/18 16:25:11 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_tolower(int i)
{
    if (i >= 'A' && i <= 'Z')
            return (i + 32);
        return (i);
}

// int main() 
// {
//     char stringa[] = "Ciao, Mondo!";
    
//     printf("Stringa originale: %s\n", stringa);

//     // Converte ogni carattere della stringa in minuscolo
//     for (int i = 0; stringa[i] != '\0'; i++) 
//     {
//         stringa[i] = ft_tolower(stringa[i]);
//     }

//     printf("Stringa in minuscolo: %s\n", stringa);

//     return 0;
// }