/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:05:27 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/05 16:51:03 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "hello";
    printf("\nBefore memset(): %s\n", str);
    
    memset(str, 'A', 8*sizeof(char));

    printf("After memset():  %s\n", str);
    
    ft_memset(str, 'A', 8*sizeof(char));
    printf("After ft_memset():  %s\n", str);
    
    return 0;
}*/
