/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 17:14:50 by bshbool           #+#    #+#             */
/*   Updated: 2025/08/11 14:42:54 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*hi;

	hi = malloc(size * nmemb);
	if (hi == NULL)
		return (NULL);
	ft_bzero(hi, size * nmemb);
	return (hi);
}

/*#include <stdio.h>
#include <stdlib.h>
int main() {
   int n = 5;
   int *array = (int*)calloc(n, sizeof(int));

   printf("Array elements after calloc: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", array[i]);
   }
   printf("\n\n");
   
   int *array2 = (int*)ft_calloc(n, sizeof(int));

   printf("Array elements after ft_calloc: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", array2[i]);
   }
   free(array);
   free(array2);
   return 0;
}*/
