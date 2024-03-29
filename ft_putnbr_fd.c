/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:21:04 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/24 13:21:05 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
    else if (n < 0)
    {
        ft_putstr_fd("-", fd);
        ft_putnbr_fd(-n, fd);
    }
    else
    {
        if (n > 9)
            ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(48 + n % 10, fd);
    }
}