#include "push_swap.h"

void first3_large(int *A, int *top, int *top2)
{
    int first;
    int largesty = largest(A,top);

    first = *top;
    if(top <= top2 -1)
    {
        if(A[first] == largesty || A[first-1] == largesty || A[first-2] == largesty
        || A[first-3] == largesty || A[first-4] == largesty)
        {
            if(A[first] == largesty)
            {
                ra(A, top, top2);
                ft_putstr("ra\n");
            }
            else if(A[first-1] == largesty)
            {
               sa(A, top, top2);
               ft_putstr("sa\n");
               
               ra(A, top, top2);
               ft_putstr("ra\n");
            }
            else if(A[first-2] == largesty)
            {
               ra(A, top, top2);
               ft_putstr("ra\n");
               
               sa(A, top, top2);
               ft_putstr("sa\n");

               ra(A, top, top2);
               ft_putstr("ra\n");
            }
            else if(A[first-3] == largesty)
            {
               rra(A, top, top2);
               ft_putstr("rra\n");
            }
        }
    }
}

int    largest(int *A, int *top)
{
    int r;
    int larg;
    
    r = A[0];
    larg = 1;
    while(larg < *top+1)
    {
        if(r < A[larg])
        r = A[larg];
        larg++;
    }
    return(r);
}

int    largestB(int *A, int *top2)
{
    int r;
    int larg;
    
    r = A[*top2];
    larg = *top2+1;
    while(larg < 99)
    {
        if(r < A[larg])
        r = A[larg];
        larg++;
    }
    return(r);
}

void sorter(int *A, int *top, int *top2,int cap)
{

    if(sort_check(A,top,top2) != cap+1)
    {
        if(A[*top]>A[*top -1])
        {
            sa(A, top, top2);
            ft_putstr("sa\n");
        }
        else if(A[*top -2] && A[*top-1]>A[*top -2])
        {
            ra(A, top, top2);
            ft_putstr("ra\n");
                
            sa(A, top, top2);
            ft_putstr("sa\n");
                
            rra(A, top, top2);
            ft_putstr("rra\n");
        }
        else if(A[*top -3] && A[*top-2]>A[*top -3])
        {
            rra(A, top, top2);
            ft_putstr("rra\n");
            
            rra(A, top, top2);
            ft_putstr("rra\n");
                    
            sa(A, top, top2);
            ft_putstr("sa\n");
                    
            ra(A, top, top2);
            ft_putstr("ra\n");
        }
        else if(A[*top-4] && A[*top-3]>A[*top-4])
        {
            rra(A, top, top2);
            ft_putstr("rra\n");
                    
            rra(A, top, top2);
            ft_putstr("rra\n");
                    
            sa(A, top, top2);
            ft_putstr("sa\n");
                    
            ra(A, top, top2);
            ft_putstr("ra\n");
                    
            ra(A, top, top2);
            ft_putstr("ra\n");
        }
    }
}

void order_imp(int *O_I, int *top_oi, int *top2_oi, int cap)
{
    int top_uni_oi = cap - 1;
    int first;
    int smallestt = smallest_oi(O_I,top_oi);

    first = *top_oi;
    while(sort_check_oi(O_I,top_oi,top2_oi) != cap+1 && *top_oi)
    {
        //if(top_oi <= top2_oi -1)
        //{
            if(O_I[first] != smallestt)
            {
                ra_oi(O_I, top_oi, top2_oi);
            }
            if(O_I[first] == smallestt)
            {
                if(sort_check_oi(O_I,top_oi,top2_oi) != cap+1)
                {
                    pb_oi(O_I, top_oi, top2_oi, cap);
                }
                
            }
        //}
    }
    while(sort_check_oi(O_I,top_oi,top2_oi) == cap+1 && *top_oi != top_uni_oi)
    {
        pa_oi(O_I, top_oi, top2_oi, cap);
    }
}

/*void finaliser(int *A, int *top, int *top2, int cap, int top_uni)
{
    if(top <= top2 -1)
    {
    if(A[*top2] > A[*top2+1])
    {
        sb(A, top, top2);
        ft_putstr("sb\n");
    }
    else if(*top != top_uni)
    {
        pa(A, O_I, &top, &top2, cap);
        ft_putstr("pa\n");
    }
    }
}*/

/*void    finaliser2(int *A, int *top, int *top2)
{
    if(sort_check(A,top,top2) != *top)
    {
        if(A[*top] < A[*top-1])
        {
            sa(A, top, top2);
            ft_putstr("sa\n");
        }
        if(A[0] < A[1])
        {
            rra(A, top, top2);
            ft_putstr("rra\n");

            rra(A, top, top2);
            ft_putstr("rra\n");

            sa(A, top, top2);
            ft_putstr("sa\n");

            rra(A, top, top2);
            ft_putstr("rra\n");

            rra(A, top, top2);
            ft_putstr("rra\n");
        }

    }
}*/

void    finaliser2_b(int *A, int *top, int *top2)
{

    if(sort_check(A,top,top2) != *top)
    {
        if(A[*top2] > A[*top2+1] && top2 <= top -2 )
        {
            sb(A, top, top2);
            ft_putstr("sb\n");
        }
        /*if(A[0] < A[1])
        {
            rra(A, top, top2);
            ft_putstr("rra\n");

            rra(A, top, top2);
            ft_putstr("rra\n");

            sa(A, top, top2);
            ft_putstr("sa\n");

            rra(A, top, top2);
            ft_putstr("rra\n");

            rra(A, top, top2);
            ft_putstr("rra\n");
        }*/
        /*if(A[*top] > A[*top-1] && A[0] > A[1] && sort_check(A,top,top2) != *top)
        {
            pb(A, top, top2, cap);
            ft_putstr("pb\n");
        }*/
    }
}

void    putback(int *A, int *O_I, int *top, int *top2, int cap, int top_uni)
{
    while(sort_check(A,top,top2) == *top && *top != top_uni)
        {
            pa(A, O_I, top, top2, cap);
            ft_putstr("pa\n");
        }
}