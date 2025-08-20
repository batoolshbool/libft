/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:49:11 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/20 16:32:26 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_dupfunc(const char *s, size_t a, char c)
{
	char	*hi;
	size_t	j;
	size_t	i;
	size_t	start;

	start = a;
	while (s[a] && s[a] != c)
		a++;
	i = a - start;
	hi = (char *)malloc((i + 1) * sizeof(char));
	if (hi == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		hi[j] = s[start + j];
		j++;
	}
	hi[j] = '\0';
	return (hi);
}

static char	**ft_free(char **hi, size_t j)
{
	while (j > 0)
		free (hi[--j]);
	free (hi);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	**hi;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	hi = malloc((count + 1) * sizeof(char *));
	if (!hi)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
			if (s[i])
			{
				hi[j] = ft_dupfunc(s, i, c);
				if (!hi[j])
					return (ft_free(hi, j));
				j++;
				while (s[i] && s[i] != c)
					i++;
			}
	}
	hi[j] = NULL;
	return (hi);
}
/*#include <stdio.h>
int main()
{
	char **meow = ft_split("  meow meow meow meow :3", ' ');
	int i = 0 ;
	while(meow[i])
	{
		printf("%s\n", meow[i]);
		free(meow[i]);
		i++;
	}
	free(meow);
}*/