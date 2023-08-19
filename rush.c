#include "ft_putchar.c"

void rush(int l, int c)
{

    int i, j;
    i = 1;
    j = 1;
    while (i <= l)
    {   j=1;
        while (j <=c )
        {
            if (i == 1 && j == 1  || i==l && j==c && c>1 && l>1)
                ft_putchar('/');
            else if (i ==1  && j == c  || i==l && j==1 )
                ft_putchar('\\');
            else if (i ==1 ||  j == 1 || i==l || j==c)
                ft_putchar('*');
            else
                ft_putchar(' ');
                j++; 
        }
        ft_putchar('\n');
        i++;
    }
}