/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:37:53 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/04 16:39:46 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*hi;
	int		i;
	int		j;

	i = 0;
	while (src[i] != '\0')
		i++;
	hi = (char *)malloc((i + 1) * sizeof(char));
	if (hi == NULL)
		return (0);
	j = 0;
	while (j <= i)
	{
		hi[j] = src[j];
		j++;
	}
	return (hi);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "Hello :)";
	char *dup = ft_strdup(src);
	printf("%s\n", dup);
	char *dup2 = strdup(src);
	printf("%s\n", dup2);
}*/
