/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:58:07 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/04 15:08:45 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	minus;
	int	num;

	i = 0;
	num = 0;
	minus = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			minus *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + (nptr[i] - 48);
		i++;
	}
	return (num * minus);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s[] = "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
}
