/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:31:59 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/05 17:14:36 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;
	char		*d2;

	if (!dest || !src)
		return (0);
	s = (const char *)src;
	d = (char *)dest;
	d2 = d;
	i = 0;
	while (i != n)
	{
		d[i] = s[i];
		i++;
	}
	while (d2[i] != '\0')
	{
		d[i] = d2[i];
		i++;
	}
	return (d2);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "HELLO!!!!!";
    char str2[] = "hihihihi";

    memmove(str2, str1, 3);

    printf("str2 memmove: ");
    printf("%s\n",str2);

   ft_memmove(str2, str1, 3);

    printf("str2 ft_memmove: ");
    printf("%s\n",str2);

    return 0;
}*/
