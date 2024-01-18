/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:09:03 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/18 15:59:34 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_toupper(int c)
{
        if (c >= 97 && c <= 122)
            return (c - 32);
        return (c);
}

// int main ()
// {
//     char stringa[] = "Ciao, mondo";
    
//     printf("Stringa originale: %s\n", stringa);
//     int i = 0; 
//     // Converte ogni carattere della stringa in maiuscolo
//     while (stringa[i] != '\0') 
//     {
        
//         stringa[i] = ft_toupper(stringa[i]);
//         i++;
//     }

//     printf("Stringa in maiuscolo: %s\n", stringa);

//     return 0;
// }