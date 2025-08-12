/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:04:45 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/12 19:34:08 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	len = (ft_strlen(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, i, len - i));
}

/*#include <stdio.h>
int main(void)
{
	char const *s1 = "....hello hi world....";
	char const *s2 = ".";
	char *meow = ft_strtrim(s1, s2);

	printf("%s\n", meow);
}*/
