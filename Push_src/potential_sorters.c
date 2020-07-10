#include "push_swap.h"

int    smallest(int *A, int *top)
{
    int r;
    int smal;

    r = A[0];
    smal = 1;
    while(smal < top[0]+1)
    {
        if(r > A[smal]){
        r = A[smal];}
        smal++;
    }
    return(r);
}

int    smallest_position(int *A, int *top)
{
    int r;
    int smal;
    int smalest = smallest(A,top);

    r = *top;
    smal = 1;
    while(smal < top[0]+1)
    {
        if(r > 0)
        {
            while(A[r] != smalest)
            {
                r--;
                smal++;
            }
            return(smal);
        }
    }
    return(0);
}

void first3_small(int *A, int *top, int *top2, int cap)
{
    /*int top_uni;*/
    int first;
    int r;
    int smallesty = smallest(A,top);

    first = *top;
    r = 0;
    /*top_uni = cap -1;*/
    if(top <= top2 -1)
    {
        if(*top <= 3)
        {
            largest(A,top);
            first3_large(A,top,top2);
            sorter(A,top,top2);
        }
        if(*top >= 4)
        {
            if(A[first] == smallesty)
            {
                if(sort_check(A,top,top2) != *top)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                }
            }
            if(A[r] == smallesty)
            {
                rra(A,top,top2);
                ft_putstr("rra\n");

                if(sort_check(A,top,top2) != *top)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                }
            }
            if(A[first-1] == smallesty)
            {
                sa(A,top,top2);
                ft_putstr("sa\n");

                if(sort_check(A,top,top2) != *top)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                }
            }
            else if(A[first] != smallesty && A[r] != smallesty)
            {
                ra(A,top,top2);
                ft_putstr("ra\n");
            }
        }
    }
    /*if(sort_check(A,top,top2) == *top && *top != top_uni)
    putback(A,top,top2,cap,top_uni);*/
}

int    midpoint10(int *A,int cap)
{
    int r;
    int mid;
    int midi;

    r = A[0];
    mid = 1;
    midi = cap/2;
    printf("=%d\n", midi);
    while(mid <= midi)
    {
        if(r > A[mid])
        r = A[mid];
        mid++;
    }
    return(r);
}

void first3_small_amended(int *A, int *top, int *top2, int cap)
{
    int top_uni;
    int last;
    int first;
    int midi = cap/2;

    first = *top;
    last = 0;
    top_uni = cap -1;
    if(top <= top2 -1)
    {
        if(sort_check(A,top,top2) != *top || *top != top_uni)
        {
            if(A[first] < midi)
            {
                if(sort_check(A,top,top2) != *top)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                }
            }
            if(A[last] < midi)
            {
                rra(A,top,top2);
                ft_putstr("rra\n");

                if(sort_check(A,top,top2) != *top)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                }
            }
            if(A[first] == midi)
            {
                if(sort_check(A,top,top2) != *top)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                }

            }
            if(A[last] > midi)
            {
                rra(A,top,top2);
                ft_putstr("rra\n");

                if(sort_check(A,top,top2) != *top)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                }

            }
            if(A[*top2] < A[*top2+1])
            {
                sb(A,top,top2,cap);
                ft_putstr("sb\n");
            }
            if(A[*top] > A[*top-1])
            {
                sa(A,top,top2);
                ft_putstr("sa\n");

                if((A[*top] - A[*top-1]) > 15)
                {
                    rra(A,top,top2);
                    ft_putstr("rra\n");
                }
            }
        }
        if(sort_check(A,top,top2) == *top && *top != top_uni)
        {
            if(A[*top2] < A[*top2+1])
            {
                sb(A,top,top2,cap);
                ft_putstr("sb\n");
            }
        }
    }
}

/*create a new 10 sorter that does 1 of 2 things 
1. find the smallest in the enire 10 and send them to b 
2. or find the 2nd,3rd,4th largest and concurrently sort*/