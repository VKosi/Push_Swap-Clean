#include "checker.h"

void sa(int *A, int *top, int *top2)
{
    if (top <= top2 - 1)
        ft_swap(&A[*top], &A[*top - 1]);
}

void sb(int *A, int *top, int *top2)
{
    if (top <= top2 - 1)
        ft_swap(&A[*top2], &A[*top2 + 1]);
}

void pa(int *A, int *top, int *top2, int cap)
{
    if (*top2 < cap)
    {
        PopB(A, cap, top, top2);
        Push(A[*top2 - 1], A, top, top2);
    }
    /*else
    {
        ft_putstr("KO\n");
        free(A);
        exit(0);
    }**/
}

void pb(int *A, int *top, int *top2, int cap)
{
    if (*top2 >= 0)
    {
        Pop(A, top, top2, cap);
        PushB(A[*top + 1], A, top, top2);
    }
    /*else
    {
        ft_putstr("KO\n");
        free(A);
        exit(0);
    }*/
}

void ra(int *A, int *top, int *top2)
{
    int r;

    r = *top;
    if (top <= top2 - 1)
        while (r > 0)
        {
            ft_swap(&A[r], &A[r - 1]);
            --r;
        }
}

void rb(int *A, int *top, int *top2, int top_uni)
{
    int r;

    r = *top2;
    if (top <= top2 - 1)
        while (r <= top_uni - 1)
        {
            ft_swap(&A[r], &A[r + 1]);
            ++r;
        }
}

void rra(int *A, int *top, int *top2)
{
    int r;
    int bottom = 0;

    r = bottom;
    if (top <= top2 - 1)
        while (r < *top)
        {
            ft_swap(&A[r], &A[r + 1]);
            r++;
        }
}

void rrb(int *A, int *top, int *top2, int top_uni)
{
    int r;

    r = top_uni;
    if (top <= top2 - 1)
        while (r > *top2)
        {
            ft_swap(&A[r], &A[r - 1]);
            --r;
        }
}

void ss(int *A, int *top, int *top2)
{
    sa(A, top, top2);
    sb(A, top, top2);
}

void rr(int *A, int *top, int *top2, int top_uni)
{
    ra(A, top, top2);
    rb(A, top, top2, top_uni);
}

void rrr(int *A, int *top, int *top2, int top_uni)
{
    rra(A, top, top2);
    rrb(A, top, top2, top_uni);
}

int sort_check(int *A, int *top, int *top2) //if check sort = top the stack is sorted
{
    int A2[500];
    int r;
    int i;
    int j;
    int count;

    i = 0;
    r = *top;
    j = 0;
    count = 0;
    while (i <= *top)
    {
        A2[i++] = A[j++];
    }
    if (top <= top2 - 1)
    {
        if (r > 0)
        {
            while (A2[r] < A2[r - 1])
            {
                r--;
                count++;
            }
            return (count - r);
        }
    }
    return (0);
}

int sort_check_b(int *A, int *top, int *top2, int top_uni) //if check sort b = top2 the stack b is sorted
{
    int r;
    int count;

    r = *top2;
    count = 0;
    if (top <= top2 - 1)
    {
        if (r < top_uni)
        {
            while (A[r] < A[r + 1])
            {
                r++;
                count++;
            }
            return (count - r);
        }
    }
    return (0);
}