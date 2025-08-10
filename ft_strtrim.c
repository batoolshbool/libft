/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:04:45 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/10 19:20:24 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*hi;

	len = (ft_strlen(s1) - ft_strlen(set));
	hi = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != set[j])
		{
			hi[i] = s1[i];
			j++;
		}
		i++;
		return (hi);
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char const *s1 = "hello hi world";
	char const *s2 = "hi";
	char *meow = ft_strtrim(s1, s2);

	printf("%s\n", meow);
}
