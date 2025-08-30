/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:10:02 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/30 13:44:22 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new;
    t_list  *temp;

    if (!lst || !f)
        return(NULL);
    new = NULL;
    while (lst)
    {
        temp = ft_lstnew(f(lst->content));
        if (!temp)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, temp);
        lst = lst->next;

    }
    return (new);
}

#include <stdio.h>

static void print_content(void *content)
{
	printf("%d\n", *(char *)content);
}

static void ft_del(void *content)
{
    free(content);
}

int main(void)
{
	// char *str1 = "10";
	// char *str2 = "20";
	// char *str3 = "30";
    int a = 10;
    int b = 20;
    int c = 30;
	t_list *n = ft_lstnew((void *)&a);
	n->next = ft_lstnew((void *)&b);
	n->next->next = ft_lstnew((void *)&c);

	t_list *meow = ft_lstmap(n, print_content, ft_del);

    t_list *temp = meow;
    while (temp)
    {
        temp = temp->content;
    }
}