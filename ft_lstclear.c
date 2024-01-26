/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:39:40 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/23 16:39:41 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmp;

    if (!del || !lst || !*lst)
            return ;
    while (lst && *lst)
    {
        tmp = (*lst) ->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
}