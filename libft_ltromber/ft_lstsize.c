/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:51:19 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 11:15:45 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* -------------------------------------------------------------------------- */
/*                   Compte le nombre d'éléments de la liste                  */
/* -------------------------------------------------------------------------- */
/* ------------------------ lst = Taille de la liste ------------------------ */
/* ------------------ VALEUR DE RETOUR: taille de la liste ------------------ */
/* -------------------------------------------------------------------------- */

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main(void)
// {
//     t_list *lst;
// }