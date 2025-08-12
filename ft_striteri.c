/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 20:43:01 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/12 20:51:40 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
/*void func(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

#include <stdio.h>
int main()
{
	char s[] = "hello";
	printf("original : %s\n", s);

	ft_striteri(s, func);
	printf("after : %s\n", s);
}*/