/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:08:56 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/18 16:25:29 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + slen));
	while (slen >= 0)
	{
		if (s[slen] == c)
			return ((char *)(s + slen));
		slen--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *str = "Hello, World!";
//     int character_to_find = 'o';

//     char *result = ft_strrchr(str, character_to_find);

//     if (result != NULL)
//     {
//         printf("Carattere trovato: %c\n", *result);
//         printf("Posizione: %ld\n", result - str);
//     }
//     else
//         {
//             printf("Carattere non trovato.\n");
//         }

//     return 0;
// }