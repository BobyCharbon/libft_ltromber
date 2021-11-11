#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"


char    *ft_strnstr(const char *big, const char *little, size_t n)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;

    if (!little[i])
        return ((char*) &big[i]);
    if (!big[i])
        return (NULL);
    while (big[i] && n--)
    {
        if (big[i] == little[i])
        {
            while((big[i + j] == little[j]) && (little[j]))
                j++;
            if (!little[j] && n >= (i + j))
                return ((char*) &big[i]);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    const char big[] = "Salut le rat";
    const char little[] = "le";

    size_t n;

    n = 40;

    printf("VRAI: %s\n", strnstr(big, little, n));
    printf("Moi: %s\n", ft_strnstr(big, little, n));
}