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

        printf("entry\n");
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
                        printf("ra\n");
                        //printf("=%d\n", smallest(A,&top));
                    }
                    else if(A[first] == *small)
                    {
                        if(sort_check(A,top,top2) != cap+1)
                        {
                            pb(A, top, top2, cap);
                            printf("pb\n");
                            //printf("=%d\n", smallest(A,&top));
                        }

                    }
                }
            }
        }
    }
    if(sort_check(A,top,top2) == cap+1 && *top != top_uni)
    {
        pa(A, top, top2, cap);
        printf("pa\n");
    }
}