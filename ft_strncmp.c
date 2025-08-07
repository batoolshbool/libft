/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:11:32 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/07 18:28:53 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;
	size_t			i;

	i = 0;
	while (1 < n)
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 != c2)
			return (c1 - c2);
		if (c1 == '\0')
			return (0);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main () 
{
   char str1[15] = "abcdef";
   char str2[15] = "abcdEF";

   int ret = strncmp(str1, str2, 4);
   if(ret < 0) 
   {
      printf("str1 is less than str2\n");
   } 
   else if(ret > 0) 
   {
      printf("str2 is less than str1\n");
   } 
   else 
   {
      printf("str1 is equal to str2\n");
   }
/////////
      int ret2 = ft_strncmp(str1, str2, 4);
   if(ret2 < 0)
   {
      printf("str1 is less than str2\n");
   }
   else if(ret > 0)
   {
      printf("str2 is less than str1\n");
   }
   else
   {
      printf("str1 is equal to str2\n");
   }

   return(0);
}*/
