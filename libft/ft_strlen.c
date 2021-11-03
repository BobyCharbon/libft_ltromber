/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:47:31 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/01 15:58:08 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str);

int	main(void)
{
	char	chaine [] = "Salut";

	ft_strlen(chaine);
	printf(ft_strlen);
}
*/

/* -------------------------------------------------------------------------- */
/*                     VA CALCULER LE NOMBRE DE CARACTERES                    */
/* ----------------------------- DANS LA STRING ----------------------------- */
/* -------------------------------------------------------------------------- */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	printf("%d\n", i);
	return (i);
}