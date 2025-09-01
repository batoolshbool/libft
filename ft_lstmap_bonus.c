/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:10:02 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/01 10:27:53 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
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

/*Error in test 2: ft_lstmap(<list: {node: "hello!"}->(null)>, [s => __strlen(s)],
[x => free(x)]) NULL check for 1th malloc: 
Memory leak: 0x563077f769f0 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del 
on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: 
"three"}->{node: "four"}->{node: "five"}->(null)>, [s => __strlen(s)], [x => 
free(x)]) NULL check for 1th malloc: 
Memory leak: 0x563077f76e70 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del 
on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: 
"three"}->{node: "four"}->{node: "five"}->(null)>, [s => __strlen(s)], [x => 
free(x)]) NULL check for 3th malloc: 
Memory leak: 0x563077f76ec0 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del 
on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: 
"three"}->{node: "four"}->{node: "five"}->(null)>, [s => __strlen(s)], [x => 
free(x)]) NULL check for 5th malloc: 
Memory leak: 0x563077f76d80 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del 
on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: 
"three"}->{node: "four"}->{node: "five"}->(null)>, [s => __strlen(s)], [x => 
free(x)]) NULL check for 7th malloc: 
Memory leak: 0x563077f76f40 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del 
on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: 
"three"}->{node: "four"}->{node: "five"}->(null)>, [s => __strlen(s)], [x => 
free(x)]) NULL check for 9th malloc: 
Memory leak: 0x563077f784d0 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del 
on the content when a new list node allocation fails.




Summary: 

Failed tests: lstmap
*/
