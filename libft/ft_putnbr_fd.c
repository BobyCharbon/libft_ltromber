#include <string.h>
#include <stdio.h>
#include <unistd.h>
// #include "libft.h"

/* -------------------------------------------------------------------------- */
/*                     Ecrit l'integer 'n' sur le fd donné                    */
/* -------------------------------------------------------------------------- */
/* ----------------------------- utiliser write ----------------------------- */
/* ------------------ convertir les int en char pour write ------------------ */
/* -------------------------------------------------------------------------- */




void ft_putnbr_fd (int n, int fd)
{
   char c;

    if (n < 0)
    {
        write (fd, "-", 1);

        if (n < -9)
            ft_putnbr_fd(n / -10, fd);
        c = '0' - (n % 10);
        write (fd, &c, 1);
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    if (n >= 0)
    {
        c = '0';
        c = c + (n % 10);
        write(fd, &c, 1);
    }
}
/* 
int main(void)
{
    int n = -1234;
    // int fd;
    ft_putnbr_fd(n);
} */