/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:50:10 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/12 19:44:31 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*#include <stdio.h>
#include <strings.h>

int main() {
    char buffer[20] = "Hello, World!";

    printf("original: \"%s\"\n", buffer);

    bzero(buffer, 4);
    printf("bzero: \"%s\"\n", buffer); 
    ft_bzero(buffer, 4);
    printf("ft_bzero: \"%s\"\n", buffer);
}*/
