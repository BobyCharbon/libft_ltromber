/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:48:43 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/07 00:16:53 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/*            convertit la lettre C en majuscule si c'est possible            */
/* -------------------------------------------------------------------------- */
/* ---------------------------- VALEUR DE RETOUR: --------------------------- */
/* ------------------------- la lettre convertie, ou ------------------------ */
/* ----------------- C si la conversion n'était pas possible ---------------- */
/* -------------------------------------------------------------------------- */

#include "libft.h"

int	ft_toupper(int c)
{
	int	i;

	i = 0;
	while (c)
	{
		if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
			return (c);
		}
		else
			return (c);
	}
	return (0);
}

/* 
int	main(void)
{
	int c;
	c = 'h';

	printf("SOURCE : %c\n",c);
	ft_toupper(c);
	printf("RESULTAT : %c\n",c);
}
 */