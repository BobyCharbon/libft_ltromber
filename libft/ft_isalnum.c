/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:32:40 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/09 15:39:55 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/*               vérifie si l'on a un caractère alphanumérique.               */
/* -------------------------------------------------------------------------- */
/* ---------------------------- VALEUR DE RETOUR: --------------------------- */
/* -------------- NULl si le caractère C est dans la catégorie -------------- */
/* --------------------------------- sinon 0 -------------------------------- */
/* -------------------------------------------------------------------------- */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

/* 
int main(void)
{
	int a = 'd';
	printf("Résultat : %d", ft_isalnum(a));
} */