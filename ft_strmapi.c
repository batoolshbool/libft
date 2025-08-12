/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:47:37 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/12 20:17:05 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char *hi;

	if (!s ||!f)
		return (NULL);
	len = ft_strlen(s);
	hi = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while(s[i++])
		hi[i] = f(i , s[i]);
	hi[i] = '\0';
	return(hi); 
}
 char func(unsigned int i, char c)
 {
	if (i % 2 == 0)
		return ((char)ft_toupper(c));
	else
		return ((char)ft_tolower(c));
 }

 #include <stdio.h>
 int main()
 {
	char *i = ft_strmapi("Helloooo", func);
	printf("%s\n", i);
 }