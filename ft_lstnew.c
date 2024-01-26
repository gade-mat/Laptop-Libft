/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:32:25 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/24 02:51:10 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list      *ft_lstnew(void *content)
{
    t_list  *elt;

    if (!(elt = (t_list*)malloc(sizeof(*elt))))
            return (NULL);
    elt->content = content;
    elt->next = NULL;
    return (elt);
}