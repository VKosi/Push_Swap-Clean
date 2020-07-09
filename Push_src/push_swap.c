#include "push_swap.h"

void    stack_string(char **string)
{
    int *A;
    int B[500];
    int cap;
    int top;
    char **string1;
    int top2;
    int top_uni;
    int f = 0;
    int j = 0;
    
    string1 = ft_strsplit(string[1], ' ');
    while(string1[j])
    {
        B[j++] = ft_atoi(string1[f++]);   
    }

    cap = j;
    A = malloc((cap) * sizeof (int));
    top2 = cap;
    top = -1;
    top_uni = top2 - 1;
    while(j)
    {
        Push(B[--j],A,&top,&top2);
    }/*stack_a_loader*/
    smallest(A,&top);
    smallest_position(A,&top);
    while(sort_check(A,&top,&top2) != cap+1 && top)
    {
        int first;
        int smallestt = smallest(A,&top);
        int small_pos =  smallest_position(A,&top);

        first = top;
        if(sort_check(A,&top,&top2) != cap+1)
        {
            if(top <= top2-1)
            {
                if(top)
                {
                    if(A[first] != smallestt)
                    {
                        if(small_pos <= cap/2)
                        {
                            ra(A, &top, &top2);
                            ft_putstr("ra\n");
                        }
                        else if(small_pos > cap/2)
                        {
                            rra(A, &top, &top2);
                            ft_putstr("rra\n");
                        }
                    }
                    else if(A[first] == smallestt)
                    {
                        if(sort_check(A,&top,&top2) != cap+1)
                        {
                            pb(A, &top, &top2, cap);
                            ft_putstr("pb\n");
                        }
                    }
                }
            }
        }
    }
    while(top != top_uni)
    {
        pa(A, &top, &top2, cap);
        ft_putstr("pa\n");
    }

    free(A);
}

void    stack(int argc, char **argv)
{

    int A[500];
    int *O_I;
    int top;
    int top_oi;
    int cap = argc -1;
    int top2;
    int top2_oi;
    int top_uni = cap-1;
    int f = 0;
    int i =0;

    top2 = cap;
    while (argc > 1)
    {
        A[f++] = ft_atoi(argv[--argc]);
    }
    top = cap - 1;
    top2_oi = cap;
    
    O_I = malloc((cap) * sizeof (int));

    while (i <= f)
	{	
        int b = f;
        O_I[--b] = A[--f];
    }
    top_oi = cap - 1;
    int top_uni_oi = cap - 1;
    smallest_oi(O_I,&top_oi);
    while(sort_check_oi(O_I,&top_oi,&top2_oi) != cap+1 && top_oi)
    {
        int first;
        int smallestt = smallest_oi(O_I,&top_oi);

        first = top_oi;
        if(sort_check_oi(O_I,&top_oi,&top2_oi) != cap+1)
        {
            if(top_oi <= top2_oi-1)
            {
                if(top_oi)
                {
                    if(O_I[first] != smallestt)
                    {
                        ra_oi(O_I, &top_oi, &top2_oi);
                    }
                    else if(O_I[first] == smallestt)
                    {
                        if(sort_check_oi(O_I,&top_oi,&top2_oi) != cap+1)
                        {
                            pb_oi(O_I, &top_oi, &top2_oi, cap);
                        }

                    }
                }
            }
        }
    }
    while(top_oi != top_uni_oi)
    {
        pa_oi(O_I, &top_oi, &top2_oi, cap);
    }
  
    smallest(A,&top);
    smallest_position(A,&top);
    while(sort_check(A,&top,&top2) != cap+1 && top)
    {
        int first;
        int smallestt = smallest(A,&top);
        int small_pos =  smallest_position(A,&top);

        first = top;
        if(sort_check(A,&top,&top2) != cap+1)
        {
            if(top <= top2-1)
            {
                if(top)
                {
                    if(A[first] != smallestt)
                    {
                        if(small_pos <= cap/2)
                        {
                            ra(A, &top, &top2);
                            ft_putstr("ra\n");
                        }
                        else if(small_pos > cap/2)
                        {
                            rra(A, &top, &top2);
                            ft_putstr("rra\n");
                        }
                    }
                    else if(A[first] == smallestt)
                    {
                        if(sort_check(A,&top,&top2) != cap+1)
                        {
                            pb(A, &top, &top2, cap);
                            ft_putstr("pb\n");
                        }
                    }
                }
            }
        }
    }
    while(top != top_uni)
    {
        pa(A, &top, &top2, cap);
        ft_putstr("pa\n");
    }
    //free(O_I);
}

int		main(int argc, char **argv)
{
	if (both_stacks_check(argc, argv))
    {
        if(argc == 2)
            stack_string(argv);
        else if(argc > 2)
            stack(argc,argv);
    }
    return(0);
}