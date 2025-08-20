/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:40:18 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/20 15:32:36 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	dig(int n)
{
	size_t	len;
	
	len = 0;
	if (n == -2147483648)
	{
		write(1,"-2147483648",11);
		return (len);
	}
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (n == 0)
        return 1;
	while (n > 0)
	{
		n = n/10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;
	
	str = NULL;
	len = dig(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	if (!str)
	return (NULL);
	if (n < 0 && n != -2147483648)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == 0)
		str[0] = '0';
	i = len - 1;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = (n / 10);
		i--;
	}
	return (str);
}
/*#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	char *res = ft_itoa(ft_atoi(argv[1]));
	printf("%s\n", res);
}*/