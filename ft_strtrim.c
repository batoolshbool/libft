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
	size_t	len;
	char	*str;

	len = (ft_strlen(s1));
	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return(ft_strdup(s1));
	i = 0;
	while (str[i] && ft_strchr(s1, set))
		i++;
	while (str[len] && ft_strchr(s1, set))
		len--;
	return (ft_substr(s1, str, len));
}

#include <stdio.h>
int main(void)
{
	char const *s1 = "  hello hi world  ";
	char const *s2 = "  ";
	char *meow = ft_strtrim(s1, s2);

	printf("%s\n", meow);
}
