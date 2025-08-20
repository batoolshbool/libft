/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:59:08 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/20 14:57:48 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		s++;
	}
	write(fd, "\n", 1);
}

/*int main(void)
{
	char *c = "lorem ipsum dolor sit amet";
	ft_putendl_fd(c, 2);
	return (0);
}*/
