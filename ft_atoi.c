/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:05:39 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/18 16:29:17 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)
{
    int     i;
    int     j;
    int     segn;
    int     check;

    check = 0;
    i = 0;
    j = 0;
    segn = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
            i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if (str[i++] == '-')
                segn = -1;
                check++;
    }
    if (check > 1)
            return (j);
    while (str[i] >= '0' && str[i] <= '9')
    {
        j = j * 10 + (str[i] - '0');
        i++;
    }
    return (j * segn);
}

// int main(void)
// {
//     const char *str1 = "  -123";
//     const char *str2 = "  +456";
//     const char *str3 = "  789";
//     const char *str4 = "  abc";

//     int result1 = ft_atoi(str1);
//     int result2 = ft_atoi(str2);
//     int result3 = ft_atoi(str3);
//     int result4 = ft_atoi(str4);

//     printf("Stringa: \"%s\" => Risultato: %d\n", str1, result1);
//     printf("Stringa: \"%s\" => Risultato: %d\n", str2, result2);
//     printf("Stringa: \"%s\" => Risultato: %d\n", str3, result3);
//     printf("Stringa: \"%s\" => Risultato: %d\n", str4, result4);

//     return 0;
// }