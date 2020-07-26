#include "push_swap.h"

void new100(int *O_I, int *A, int *top, int *top2, int cap)
{
    int midi;
    int r;
    int last;
    int one;
    int two;

    one = oner(A,O_I,top);
    two = twoer(A,O_I,top);
    midi = cap / 2;
    r = *top;
    last = 0;
    //top_uni = cap -1;
    if (*top <= 99)
    {
        if((A[r] >= O_I[99] && A[r] <= O_I[80]) && (A[last] >= O_I[99] && A[last] <= O_I[80]))
        {
        if (A[r] >= O_I[99] && A[r] <= O_I[80])
        { 
            if (r < midi )/*&& (*top - r) < (last))*/
            {
                if (A[*top] != one)
                {
                    ra(A, top, top2);
                    ft_putstr("ra_chunk1_first\n");
                }
                else if (A[*top] == one)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb_chunk1_first\n");
                }
            }
            if (r > midi)/* && (*top - r) > (last))*/
            {
                if (A[*top] != one)
                {
                    rra(A, top, top2);
                    ft_putstr("rra_chunk1_first\n");
                }
                else if (A[*top] == one)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb_chunk1_first\n");
                }
            }
            r--;
        }
        if (A[last] >= O_I[99] && A[last] <= O_I[80])
        {
            if (last > midi)/* && (*top - r) < (last))*/
            {
                if (A[*top] != two)
                {
                    rra(A, top, top2);
                    ft_putstr("rra_chunk1_last\n");
                }
                else if (A[*top] == two)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb_chunk1_last\n");
                }
            }
            if (last < midi)/* && (*top - r) > (last))*/
            {
                if (A[*top] != two)
                {
                    ra(A, top, top2);
                    ft_putstr("ra_chunk1_last\n");
                }
                else if (A[*top] == two)
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb_chunk1_last\n");
                }
            }
            last++;
        }
        }

        /*while(A[r] >= O_I[79] && A[r] <= O_I[60])
        {
            if(A[r] >= O_I[79] && A[r] <= O_I[60])
            {
                int oner;
                
                oner = A[r];
                if(r > midi)
                {
                    if(A[*top] != oner)
                    {
                        rra(A,top,top2);
                        ft_putstr("rra_chunk2\n");
                    }
                    else if(A[*top] == oner)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk2\n");
                    }
                }
                if(r < midi)
                {
                    if(A[*top] != oner)
                    {
                        ra(A,top,top2);
                        ft_putstr("ra_chunk2\n");
                    }
                    else if(A[*top] == oner)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk2\n");
                    }
                }
            }
            if(A[r] >= O_I[79] && A[r] <= O_I[60])
            {
                twoer = A[last];
                if(last > midi)
                {
                    if(A[*top] != twoer)
                    {
                        rra(A,top,top2);
                        ft_putstr("rra_chunk3\n");
                    }
                    else if(A[*top] == twoer)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk3\n");
                    }
                }
                if(last < midi)
                {
                    if(A[*top] != twoer)
                    {
                        ra(A,top,top2);
                        ft_putstr("ra_chunk3\n");
                    }
                    else if(A[*top] == twoer)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk3\n");
                    }
                }
            }
        }

        if(A[r] >= O_I[59] && A[r] <= O_I[40])
        {
            if(A[r] >= O_I[59] && A[r] <= O_I[40])
            {
                int oner;

                oner = A[r];
                if(r > midi)
                {
                    if(A[*top] != oner)
                    {
                        rra(A,top,top2);
                        ft_putstr("rra_chunk4\n");
                    }
                        else if(A[*top] == oner)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk4\n");
                    }
                }
                if(r < midi)
                {
                    if(A[*top] != oner)
                    {
                        ra(A,top,top2);
                        ft_putstr("ra_chunk4\n");
                    }
                    else if(A[*top] == oner)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk4\n");
                    }
                }
            }
            if(A[last] >= O_I[59] && A[last] <= O_I[40])
            {
                twoer = A[last];
                if(last > midi)
                {
                    if(A[*top] != twoer)
                    {
                        rra(A,top,top2);
                        ft_putstr("rra\n");
                    }
                    else if(A[*top] == twoer)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("rra\n");
                    }
                }
                if(last < midi)
                {
                    if(A[*top] != twoer)
                    {
                        ra(A,top,top2);
                        ft_putstr("rra\n");
                    }
                    else if(A[*top] == twoer)
                    {
                        pb(A,top,top2,cap);
                         ft_putstr("rra\n");
                    }
                }
            }
        }
        if(A[r] >= O_I[39] && A[r] <= O_I[20])
        {
            if(A[r] >= O_I[39] && A[r] <= O_I[20])
            {
                int oner;

                oner = A[r];
                if(r > midi)
                {
                    if(A[*top] != oner)
                    {
                        rra(A,top,top2);
                        ft_putstr("rra\n");
                    }
                    else if(A[*top] == oner)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("rra\n");
                    }
                }
                    if(r < midi)
                {
                    if(A[*top] != oner)
                    {
                        ra(A,top,top2);
                        ft_putstr("rra\n");
                    }
                    else if(A[*top] == oner)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("rra\n");
                    }
                }
            }   
            if(A[last] >= O_I[39] && A[last] <= O_I[20])
            {
                twoer = A[last];
                if(last > midi)
                {
                    if(A[*top] != twoer)
                    {
                        rra(A,top,top2);
                        ft_putstr("rra\n");
                    }
                    else if(A[*top] == twoer)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb\n");
                    }
                }
                if(last < midi)
                {
                    if(A[*top] != twoer)
                    {
                        ra(A,top,top2);
                        ft_putstr("ra_chunk4\n");
                    }
                    else if(A[*top] == twoer)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk4\n");
                    }
                }
            }
        }
        if(A[r] >= O_I[19] && A[r] <= O_I[0])
        {
            if(A[r] >= O_I[19] && A[r] <= O_I[0])
            {
                int oner;

                oner = A[r];
                if(r > midi)
                {
                    if(A[*top] != oner)
                    {
                        rra(A,top,top2);
                        ft_putstr("rra_chunk5\n");
                    }
                    else if(A[*top] == oner)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk5\n");
                    }
                }
                if(r < midi)
                {
                    if(A[*top] != oner)
                    {
                        ra(A,top,top2);
                        ft_putstr("ra_chunk5\n");
                    }
                    else if(A[*top] == oner)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk5\n");
                    }
                }
            }
            if(A[last] >= O_I[19] && A[last] <= O_I[0])
            {
                twoer = A[last];
             if(last > midi)
                {
                    if(A[*top] != twoer)
                    {
                        rra(A,top,top2);
                        ft_putstr("rra_chunk5\n");
                    }
                    else if(A[*top] == twoer)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk5\n");
                    }
                }
                if(last < midi)
                {
                    if(A[*top] != twoer)
                    {
                        ra(A,top,top2);
                        ft_putstr("ra_chunk5\n");
                    }
                    else if(A[*top] == twoer)
                    {
                        pb(A,top,top2,cap);
                        ft_putstr("pb_chunk5\n");
                    }
                }
            }
        }*/
    }
}