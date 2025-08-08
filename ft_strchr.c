/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:49:48 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/05 12:47:53 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char tweet[] = "This is my @mention hi";
	char *m  = strchr(tweet, '@');
	char *m2 = ft_strchr(tweet, '@');
	printf("%s\n", m);
	printf("%s\n", m2);
}*/
