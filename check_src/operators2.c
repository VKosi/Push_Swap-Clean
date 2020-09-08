#include "checker.h"

void Print(int *top, int *A)
{
    int i;
    ft_putstr("Stack a starts here\n");
    for (i = top[0]; i >= 0; --i)
    {
        ft_putnbr(A[i]);
        ft_putchar('\n');
    }
}

void PrintB(int *top2, int *A, int cap)
{
    int i;
    ft_putstr("Stack b starts here\n");
    for (i = top2[0]; i < cap; ++i)
    {
        ft_putnbr(A[i]);
        ft_putchar('\n');
    }
}

void Push(int x, int *A, int *top, int *top2)
{
    if (top <= top2 - 1)
    { // overflow case.
        A[++*top] = x;
    }
    else
    {
        ft_putstr("KO\n");
        free(A);
        exit(0);
    }
}

void PushB(int z, int *A, int *top, int *top2)
{
    if (*top >= -1)
    { // overflow case.
        A[--*top2] = z;
    }
    /*else
    {
        ft_putstr("KO\n");
        free(A);
        exit(0);
    }*/
}

void Pop(int *A, int *top, int *top2, int cap)
{
    if (*top2 <= cap)
    {
        int popped_value = A[top[0]--];
        if (*top2 > cap)
        {
            ft_putchar(popped_value);
        }
    }
    else
    {
        ft_putstr("KO\n");
        free(A);
        exit(0);
    }
}

void PopB(int *A, int cap, int *top, int *top2)
{
    if (top <= top2 -1)
    {
        int popped_value = A[top2[0]++];
        if (*top2 > cap)
        {
            ft_putchar(popped_value);
        }
    }
    else
    {
        ft_putstr("KO\n");
        free(A);
        exit(0);
    }
}