/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:49:11 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/13 19:38:07 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t	i = 0;
	size_t	count = 0;

	while(s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if(s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char const 	**hi;

	if (!s)
		return(NULL);
	count = ft_count(s , c);
	hi = malloc((count + 1) * sizeof(char));
	if(!hi)
		return(NULL);
	i = 0;
	j = 0;
	while (s[i]!= '\0')
	{
		while (s[i] == c)
			i++;
		size_t	start = i;
		while(s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			hi[j] = &s[start];
			j++;
			start++;
			/*if(!hi[j])
				while (j > 0)
					free (hi[--j]);
			free (hi);
			return (NULL);*/
		}
		j++;
	}
	hi[j] = NULL;
	char hello = ft_strdup(hi);
	return (hello);
}
#include <stdio.h>
int main()
{
	char **meow = ft_split("meow meow meow meow :3", ' ');
	int i = 0 ;
	while(meow[i])
	{
		printf("%s\n", meow[i]);
		i++;
	}
}