/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:21:11 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/25 16:32:06 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_size(int number)
{
	int	length;

	length = 0;
	if (number <= 0)
		length++;
	while (number != 0)
	{
		number = number / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	size_t	length;
	int		number;
	char	*string;

	length = ft_number_size(n);
	number = 1;
	string = malloc((length + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[length] = '\0';
	if (n < 0)
	{
		number = -1;
		string[0] = '-';
	}
	else if (n == 0)
		string[0] = '0';
	while (n != 0)
	{
		length--;
		string[length] = (n % 10 * number) + '0';
		n = n / 10;
	}
	return (string);
}
