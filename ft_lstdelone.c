/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:06:55 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/30 12:49:21 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
//int main()
//{
//	t_list *list = NULL;
//	list = ft_lstnew(ft_strdup("hellooo"));
//	ft_lstdelone(list, free);
//	list = NULL;
//	printf("node deleted\n");
//}