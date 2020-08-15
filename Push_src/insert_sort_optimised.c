#include "push_swap.h"

void int_sort(int *A, int *top, int *top2, int cap,int *small)
{
    int top_uni = cap - 1;
    //int first;
    //int smallestt = smallest(A,top);

    //first = *top;
    //smallest(A,top);
    if(sort_check(A,top,top2) != cap+1 && top)
    {
        int first;
        //int smalles = small;

        ft_putstr("entry\n");
        first = *top;
        if(sort_check(A,top,top2) != cap+1)
        {
            if(top <= top2-1)
            {
                if(top)
                {
                    if(A[first] != *small)
                    {
                        ra(A, top, top2);
                        ft_putstr("ra\n");
                    }
                    else if(A[first] == *small)
                    {
                        if(sort_check(A,top,top2) != cap+1)
                        {
                            pb(A, top, top2, cap);
                            ft_putstr("pb\n");
                        }

                    }
                }
            }
        }
    }
    if(sort_check(A,top,top2) == cap+1 && *top != top_uni)
    {
        //pa(A, O_I, top, top2, cap);
        ft_putstr("pa\n");
    }
}