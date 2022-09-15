/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:52:17 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/06 23:47:07 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/*     Écrit la chaine de caractères ’s’ sur le file descriptor donné.     */
/* -------------------------------------------------------------------------- */
/* ------------------ S = la chaine de caractères à écrire ----------------- */
/* ---------------- FD = le file descriptor sur lequel écrire --------------- */
/* -------------------------------------------------------------------------- */
/* --------------------------- VALEUR DE RETOUR: / -------------------------- */
/* -------------------------------------------------------------------------- */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!fd || !s)
		return ;
	while (((char *)s)[i])
	{
		write(fd, s + i, 1);
		i++;
	}
}

/* 
int main(void)
{
    char s[] = "Salut";
    // printf("RESULTAT: |%s|\n", ft_putstr_fd(s));
    ft_putstr_fd(s);
} */