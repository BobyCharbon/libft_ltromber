#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
//#include "libft.h"

/* -------------------------------------------------------------------------- */
/*              Alloue (avec malloc(3)) et retourne une chaine de             */
/* --------- caractères représentant l’integer reçu en argument. --------- */
/* -------------------------------------------------------------------------- */
/* ---------------------- NULL si l’allocation échoue. --------------------- */
/* -------------- Les nombres négatifs doivent être gérés. -------------- */
/* -------------------------------------------------------------------------- */

static int ft_nbrlen (int n)
{
    int i;
    i = 0;

    if (n == 0)
        return (1);
    if (n < 0)
    {
        n = n / -10;
        i = 2;
    }
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    char *s;
    int number_of_char;
    int i;

    number_of_char = ft_nbrlen(n);
    s = malloc(sizeof(char) * (number_of_char + 1));
    if (s == NULL)
        return (NULL);
    i = number_of_char - 1;
    s[number_of_char] = '\0';
    if (n == 0)
        s[i] = n % 10 + 48;
    if (n < 0)
    {
        s[0] = '-';
        s[i--] = -(n % 10) + 48;
        n = n / -10;
    }
    while (n > 0)
    {
        s[i--] = n % 10 + 48;
        n = n / 10;
    }
    return (s);
}
/* 
int main(void)
{
	int n = 2147483647;
	printf("RESULTAT: |%s|\n", (ft_itoa(n)));
} */