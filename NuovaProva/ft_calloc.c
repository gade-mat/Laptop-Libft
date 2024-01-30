/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:07:35 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/18 16:29:04 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t b)
{
	void	*p;

	p = malloc (c * b);
	if (p == NULL)
		return (p);
	ft_bzero(p, b * c);
	return (p);
}

// int main(void)
// {
//     size_t count = 5;
//     size_t size = sizeof(int);

//     // Testiamo ft_calloc con un array di interi
//     int *arr = (int *)ft_calloc(count, size);

//     if (arr != NULL)
//     {
//         // Stampa l'array allocato
//         printf("Array allocato: ");
//         for (size_t i = 0; i < count; ++i)
//         {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");

//         // Libera la memoria allocata
//         free(arr);
//     }
//     else
//     {
//         printf("Errore nell'allocazione della memoria.\n");
//     }
//     return 0;
// }