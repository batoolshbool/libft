/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:10:02 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/01 10:59:21 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&temp, del);
			return (NULL);
	
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}

/*
Error in test 2: ft_lstmap(<list: {node: "hello!"}->(null)>, [s => __strlen(s)], [x => free(x)]) NULL check for 1th malloc: 
Memory leak: 0x55cf725589f0 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: "three"}->{node: "four"}->{node: "five"}->(null)>, [s => __strlen(s)], [x => free(x)]) NULL check for 1th malloc: 
Memory leak: 0x55cf72558e70 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: "three"}->{node: "four"}->{node: "five"}->(null)>, [s => __strlen(s)], [x => free(x)]) NULL check for 3th malloc: 
Memory leak: 0x55cf72558ef0 - 30 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72558f20 - 16 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72558ec0 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: "three"}->{node: "four"}->{node: "five"}->(null)>, [s => __strlen(s)], [x => free(x)]) NULL check for 5th malloc: 
Memory leak: 0x55cf72558fc0 - 30 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72558ff0 - 16 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72558f70 - 30 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72558fa0 - 16 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72558e20 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: "three"}->{node: "four"}->{node: "five"}->(null)>, [s => __strlen(s)], [x => free(x)]) NULL check for 7th malloc: 
Memory leak: 0x55cf7255a4e0 - 30 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf7255a510 - 16 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72559040 - 30 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72559090 - 16 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72559010 - 30 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72559070 - 16 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf72558d80 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: "three"}->{node: "four"}->{node: "five"}->(null)>, [s => __strlen(s)], [x => free(x)]) NULL check for 9th malloc: 
Memory leak: 0x55cf7255a600 - 30 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf7255a680 - 16 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf7255a5b0 - 30 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf7255a630 - 16 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf7255a560 - 30 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf7255a5e0 - 16 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf7255a530 - 30 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf7255a590 - 16 bytes
You failed to free the memory allocated at:
Memory leak: 0x55cf7255a6a0 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.
*/