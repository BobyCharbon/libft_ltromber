/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:37:40 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/15 19:06:11 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char	*str, int c)
{
	int	i;

	i = 0;

	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	chaine[] = "Ah ouais gros tema ta taille du raph";
	//char	dest[50];

	int c = ' ';
	//ft_strchr(chaine, c);
	printf("VRAI : %s\n\n",strchr(chaine, c));
	//printf("Source : %s\n", chaine);
	//printf("A Rechercher : %c\n", c);
	printf("MOI : %s\n", ft_strchr(chaine, c));
} */