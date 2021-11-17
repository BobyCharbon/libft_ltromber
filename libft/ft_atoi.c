#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>
#include <stdbool.h>

static _Bool ft_isspace (char c)
{
    if (c == '\n' || c == '\t' || c == '\v' 
    || c == '\f' || c == '\r' || c == ' ')
        return (true);
    return (false);
}

int ft_atoi (const char *str)
{
    int i;
    int resultat;
    int signe;

    i = 0;
    signe = 1;
    resultat = 0;

    while (ft_isspace(*str))
        str++;
    if (str[i] == '-')
    {
        signe = -1;
        str++;
    }
    else if (str[i] == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        resultat = resultat * 10;
        resultat = resultat + (*str - 48);
        str++;
    }
    return(resultat * signe);
}
/* 
int main(void)
{
    char str[] = "  -200038373";

    printf("Moi: %d\n", ft_atoi(str));
    printf("VRAI: %d\n", atoi(str));
} */