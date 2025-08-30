/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:10:02 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/30 13:15:00 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
{
    t_list *new;
    t_list  *temp;

    if (!lst || !f)
        return(NULL);
    new = NULL;
    while (lst)
    {
        tem = ft_lstnew(f(lst->content));
        if (!temp)
        {
            ft_lstclear(temp, del);
            return (NULL);
        }
        ft_lstadd_back(&new, temp);
        lst = lst->next;

    }
    return (new);
}