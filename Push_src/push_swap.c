#include "push_swap.h"

void stack(int argc, char **argv)
{

    int *A;
    int *O_I;
    int top;
    int top_oi;
    int cap = argc - 1;
    int top2;
    int top2_oi;
    int f = 0;
    int i = 0;

    top2 = cap;
    A = malloc((cap + 1) * sizeof(int));
    while (argc > 1 && argv != NULL)
    {
        A[f++] = ft_atoi(argv[--argc]);
    }
    O_I = malloc((cap + 1) * sizeof(int));
    top = f - 1;

    top2_oi = cap;
    while (i <= f)
    {
        int b = f;
        O_I[b--] = A[f--];
    }
    top_oi = cap - 1;
    int top_uni_oi = cap - 1;
    smallest_oi(O_I, &top_oi);
    while (sort_check_oi(O_I, &top_oi, &top2_oi) != cap+1 && top_oi)
    {
        int first;
        int smallestt = smallest_oi(O_I, &top_oi);

        first = top_oi;
        if (sort_check_oi(O_I, &top_oi, &top2_oi) != cap + 1)
        {
            if (top_oi <= top2_oi - 1)
            {
                if (top_oi)
                {
                    if (O_I[first] != smallestt)
                    {
                        ra_oi(O_I, &top_oi, &top2_oi);
                    }
                    else if (O_I[first] == smallestt)
                    {
                        if (sort_check_oi(O_I, &top_oi, &top2_oi) != cap + 1)
                        {
                            pb_oi(O_I, &top_oi, &top2_oi, cap);
                        }
                    }
                }
            }
        }
    }
    while (top_oi != top_uni_oi)
    {
        pa_oi(O_I, &top_oi, &top2_oi, cap);
    }

    if (sort_check(A, &top, &top2) == top || sort_check(A, &top, &top2) == top+2)
    {
        free(A);
        free(O_I);
        exit(0);
    }

    int top_uni = cap - 1;

    if (top_uni == 3)
    {
        if (sort_check(A, &top, &top2) != top || sort_check(A,&top,&top2) !=  top +2)
        {
            //if (sort_check(A, &top, &top2) == top + 2)
            //{
            //    break;
            //}
            first3_small2(A, &top, &top2, cap);
            putback(A, O_I, &top, &top2, cap, top_uni);
        }
    }

    if (top_uni == 4)
    {
        if (sort_check(A, &top, &top2) != top || top + 2)
        {
            if (sort_check(A, &top, &top2) != top)
            {
                first3_small2(A, &top, &top2, cap);
            }
            putback(A, O_I, &top, &top2, cap, top_uni);
        }
    }

    if (sort_check(A, &top, &top2) == top)
    {
        free(A);
        free(O_I);
        exit(0);
    }

    if (top <= 4 && top_uni <= 4)
    {
        while ((sort_check(A, &top, &top2) != top && sort_check(A, &top, &top2) != top+2) ||
        (sort_check(A, &top, &top2) != top && sort_check(A, &top, &top2) != top+2))
        {
            if (sort_check(A, &top, &top2) != top)
            {
                first3_small2(A, &top, &top2, cap);
            }
            putback(A, O_I, &top, &top2, cap, top_uni);
        }
    }
    if (top > 4)
    {
        while (top > 79 && top_uni <= 99)
        {
            if (A[top] == oner(A, O_I, &top) && A[top] == twoer(A, O_I, &top))
            {
                if (A[top] == oner(A, O_I, &top) && A[top] == twoer(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position(A, O_I, &top) <= (cap - top) / 2 || oner(A, O_I, &top) == twoer(A, O_I, &top))
            {

                while (A[top] != oner(A, O_I, &top))
                {
                    if (A[top] == oner(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    ra(A, &top, &top2);
                    ft_putstr("ra\n");
                }
            }
            else
            {
                while (A[top] != oner(A, O_I, &top))
                {
                    if (A[top] == oner(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (A[top] == oner(A, O_I, &top) && A[top] == twoer(A, O_I, &top))
            {
                if (A[top] == oner(A, O_I, &top) && A[top] == twoer(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (twoer_position(A, O_I, &top) <= (cap - top) / 2)
            {
                while (A[top] != twoer(A, O_I, &top))
                {
                    if (A[top] == oner(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }

                    ra(A, &top, &top2);
                    ft_putstr("ra\n");
                }
            }
            else
            {

                int x;

                x = 0;
                while (A[top] != twoer(A, O_I, &top))
                {
                    if (A[top] == oner(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }

                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                    x++;
                }
            }
        }

        while (top > 59 && top_uni <= 99)
        {
            if (A[top] == oner2(A, O_I, &top) && A[top] == twoer2(A, O_I, &top))
            {
                if (A[top] == oner2(A, O_I, &top) && A[top] == twoer2(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position2(A, O_I, &top) <= (cap - top) / 2 || oner2(A, O_I, &top) == twoer2(A, O_I, &top))
            {

                while (A[top] != oner2(A, O_I, &top))
                {
                    if (A[top] == oner2(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    ra(A, &top, &top2);
                    ft_putstr("ra\n");
                }
            }
            else
            {
                while (A[top] != oner2(A, O_I, &top))
                {
                    if (A[top] == oner2(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (A[top] == oner(A, O_I, &top) && A[top] == twoer(A, O_I, &top))
            {
                if (A[top] == oner(A, O_I, &top) && A[top] == twoer(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (twoer_position2(A, O_I, &top) <= (cap - top) / 2 || oner2(A, O_I, &top) == twoer2(A, O_I, &top))
            {
                while (A[top] != twoer2(A, O_I, &top))
                {
                    if (A[top] == oner2(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }

                    ra(A, &top, &top2);
                    ft_putstr("ra\n");
                }
            }
            else
            {

                while (A[top] != twoer2(A, O_I, &top))
                {
                    if (A[top] == oner2(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }

                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }
        }

        while (top > 39 && top_uni <= 99)
        {
            if (A[top] == oner3(A, O_I, &top) && A[top] == twoer3(A, O_I, &top))
            {
                if (A[top] == oner3(A, O_I, &top) && A[top] == twoer3(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position3(A, O_I, &top) <= (cap - top) / 2 || oner3(A, O_I, &top) == twoer3(A, O_I, &top))
            {

                while (A[top] != oner3(A, O_I, &top))
                {
                    if (A[top] == oner3(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    ra(A, &top, &top2);
                    ft_putstr("ra\n");
                }
            }
            else
            {
                while (A[top] != oner3(A, O_I, &top))
                {
                    if (A[top] == oner3(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (A[top] == oner3(A, O_I, &top) && A[top] == twoer3(A, O_I, &top))
            {
                if (A[top] == oner3(A, O_I, &top) && A[top] == twoer3(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (twoer_position3(A, O_I, &top) <= (cap - top) / 2 || oner3(A, O_I, &top) == twoer3(A, O_I, &top))
            {
                while (A[top] != twoer3(A, O_I, &top))
                {
                    if (A[top] == oner3(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }

                    ra(A, &top, &top2);
                    ft_putstr("ra\n");
                }
            }
            else
            {
                while (A[top] != twoer3(A, O_I, &top))
                {
                    if (A[top] == oner3(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }

                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }
        }

        while (top > 19 && top_uni <= 99)
        {

            if (A[top] == oner4(A, O_I, &top) && A[top] == twoer4(A, O_I, &top))
            {
                if (A[top] == oner4(A, O_I, &top) && A[top] == twoer4(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position4(A, O_I, &top) <= (cap - top) / 2 || oner4(A, O_I, &top) == twoer4(A, O_I, &top))
            {

                while (A[top] != oner4(A, O_I, &top))
                {
                    if (A[top] == oner4(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    ra(A, &top, &top2);
                    ft_putstr("ra\n");
                }
            }
            else
            {
                while (A[top] != oner4(A, O_I, &top))
                {
                    if (A[top] == oner4(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (twoer_position4(A, O_I, &top) <= (cap - top) / 2 || oner4(A, O_I, &top) == twoer4(A, O_I, &top))
            {
                while (A[top] != twoer4(A, O_I, &top))
                {
                    if (A[top] == oner4(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }

                    ra(A, &top, &top2);
                    ft_putstr("ra\n");
                }
            }
            else
            {
                while (A[top] != twoer4(A, O_I, &top))
                {
                    if (A[top] == oner4(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }

                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }
        }

        while (top > 0 && top_uni <= 99)
        {
            if (A[top] != O_I[0])
            {
                pb(A, &top, &top2, cap);
                ft_putstr("pb\n");
            }
            else
            {
                ra(A, &top, &top2);
                ft_putstr("ra\n");
            }
        }

        while (top <= 98 && top_uni <= 99)
        {
            if (A[top2] == O_I[top2])
            {
                if (A[top2] == O_I[top2])
                {
                    pa(A, O_I, &top, &top2, cap);
                    ft_putstr("pa\n");
                    
                    // y++;
                }
            }

            if (oner_position_big(A, O_I, &top2) <= (cap - top) / 2)
            {
                while (A[top2] <= biggy(O_I, &top2))
                {
                    if (A[top2] == biggy(O_I, &top2))
                    {
                        pa(A, O_I, &top, &top2, cap);
                        ft_putstr("pa\n");
                        
                        break;
                    }
                    else
                    {
                        rb(A, &top, &top2, top_uni);
                        ft_putstr("rb\n");
                    }
                }
            }
            else
            {
                while (A[top2] <= O_I[top2])
                {
                    if (A[top2] == O_I[top2])
                    {
                        pa(A, O_I, &top, &top2, cap);
                        ft_putstr("pa\n");
                        
                        break;
                    }
                    else
                    {
                        rrb(A, &top, &top2, top_uni);
                        ft_putstr("rrb\n");
                    }
                }
            }
        }
    }
    free(A);
    free(O_I);
}

int main(int argc, char **argv)
{
    if (both_stacks_check(argc, argv))
    {
        if (argc <= 101)
        {
            stack(argc, argv);
        }
        else if (argc > 101)
            stack500(argc, argv);
    }
    return (0);
}
