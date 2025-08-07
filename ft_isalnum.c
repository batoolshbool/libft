/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:06:36 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/05 14:32:29 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c = 'A';
	if (isalnum(c)) 
		printf("%c is alphanumeric\n", c);
	else
		printf("%c is not alphanumeric\n", c);

        if (ft_isalnum(c)) 
                printf("%c is alphanumeric", c);
        else    
                printf("%c is not alphanumeric", c);
}*/
