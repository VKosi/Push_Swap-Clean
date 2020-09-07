# include "push_swap.h"

void stack500(int argc, char **argv)
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
    A = malloc((cap+1) * sizeof(int));
    while (argc > 1 && argv != NULL)
    {
        A[f++] = ft_atoi(argv[--argc]);
    }
    O_I = malloc((cap+1) * sizeof(int));
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
    while (sort_check_oi(O_I, &top_oi, &top2_oi) != cap + 1 && top_oi)
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

    //int top_uni = cap - 1;

    if (top > 4)
    {
        while (top > 452 && top <= top2 - 1)
        {
            if (A[top] == oner_(A, O_I, &top) && A[top] == twoer_(A, O_I, &top))
            {
                if (A[top] == oner_(A, O_I, &top) && A[top] == twoer_(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_(A, O_I, &top) <= (cap - top) / 2 || oner_(A, O_I, &top) == twoer_(A, O_I, &top))
            {

                while (A[top] != oner_(A, O_I, &top))
                {
                    if (A[top] == oner_(A, O_I, &top))
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
                while (A[top] != oner_(A, O_I, &top))
                {
                    if (A[top] == oner_(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (A[top] == oner_(A, O_I, &top) && A[top] == twoer_(A, O_I, &top))
            {
                if (A[top] == oner_(A, O_I, &top) && A[top] == twoer_(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (twoer_position_(A, O_I, &top) <= (cap - top) / 2)
            {
                while (A[top] != twoer_(A, O_I, &top))
                {
                    if (A[top] == oner_(A, O_I, &top))
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
                while (A[top] != twoer_(A, O_I, &top))
                {
                    if (A[top] == oner_(A, O_I, &top))
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

        while (top > 405 && top <= top2 - 1)
        {
            if (A[top] == oner_1(A, O_I, &top) && A[top] == twoer_1(A, O_I, &top))
            {
                if (A[top] == oner_1(A, O_I, &top) && A[top] == twoer_1(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_1(A, O_I, &top) <= (cap - top) / 2 || oner_1(A, O_I, &top) == twoer_1(A, O_I, &top))
            {

                while (A[top] != oner_1(A, O_I, &top))
                {
                    if (A[top] == oner_1(A, O_I, &top))
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
                while (A[top] != oner_1(A, O_I, &top))
                {
                    if (A[top] == oner_1(A, O_I, &top))
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

            if (twoer_position_1(A, O_I, &top) <= (cap - top) / 2 || oner_1(A, O_I, &top) == twoer_1(A, O_I, &top))
            {
                while (A[top] != twoer_1(A, O_I, &top))
                {
                    if (A[top] == oner_1(A, O_I, &top))
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
                while (A[top] != twoer_1(A, O_I, &top))
                {
                    if (A[top] == oner_1(A, O_I, &top))
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

        while (top > 358 && top <= top2 - 1)
        {
            if (A[top] == oner_2(A, O_I, &top) && A[top] == twoer_2(A, O_I, &top))
            {
                if (A[top] == oner_2(A, O_I, &top) && A[top] == twoer_2(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_2(A, O_I, &top) <= (cap - top) / 2 || oner_2(A, O_I, &top) == twoer_2(A, O_I, &top))
            {

                while (A[top] != oner_2(A, O_I, &top))
                {
                    if (A[top] == oner_2(A, O_I, &top))
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
                while (A[top] != oner_2(A, O_I, &top))
                {
                    if (A[top] == oner_2(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (A[top] == oner_2(A, O_I, &top) && A[top] == twoer_2(A, O_I, &top))
            {
                if (A[top] == oner_2(A, O_I, &top) && A[top] == twoer_2(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (twoer_position_2(A, O_I, &top) <= (cap - top) / 2 || oner_2(A, O_I, &top) == twoer_2(A, O_I, &top))
            {
                while (A[top] != twoer_2(A, O_I, &top))
                {
                    if (A[top] == oner_2(A, O_I, &top))
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
                while (A[top] != twoer_2(A, O_I, &top))
                {
                    if (A[top] == oner_2(A, O_I, &top))
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

        while (top > 311 && top <= top2 - 1)
        {

            if (A[top] == oner_3(A, O_I, &top) && A[top] == twoer_3(A, O_I, &top))
            {
                if (A[top] == oner_3(A, O_I, &top) && A[top] == twoer_3(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_3(A, O_I, &top) <= (cap - top) / 2 || oner_3(A, O_I, &top) == twoer_3(A, O_I, &top))
            {

                while (A[top] != oner_3(A, O_I, &top))
                {
                    if (A[top] == oner_3(A, O_I, &top))
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
                while (A[top] != oner_3(A, O_I, &top))
                {
                    if (A[top] == oner_3(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (twoer_position_3(A, O_I, &top) <= (cap - top) / 2 || oner_3(A, O_I, &top) == twoer_3(A, O_I, &top))
            {
                while (A[top] != twoer_3(A, O_I, &top))
                {
                    if (A[top] == oner_3(A, O_I, &top))
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
                while (A[top] != twoer_3(A, O_I, &top))
                {
                    if (A[top] == oner_3(A, O_I, &top))
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

        while (top > 264 && top <= top2 - 1)
        {

            if (A[top] == oner_4(A, O_I, &top) && A[top] == twoer_4(A, O_I, &top))
            {
                if (A[top] == oner_4(A, O_I, &top) && A[top] == twoer_4(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_4(A, O_I, &top) <= (cap - top) / 2 || oner_4(A, O_I, &top) == twoer_4(A, O_I, &top))
            {

                while (A[top] != oner_4(A, O_I, &top))
                {
                    if (A[top] == oner_4(A, O_I, &top))
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
                while (A[top] != oner_4(A, O_I, &top))
                {
                    if (A[top] == oner_4(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (twoer_position_4(A, O_I, &top) <= (cap - top) / 2 || oner_4(A, O_I, &top) == twoer_4(A, O_I, &top))
            {
                while (A[top] != twoer_4(A, O_I, &top))
                {
                    if (A[top] == oner_4(A, O_I, &top))
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
                while (A[top] != twoer_4(A, O_I, &top))
                {
                    if (A[top] == oner_4(A, O_I, &top))
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

        while (top > 217 && top <= top2 - 1)
        {

            if (A[top] == oner_5(A, O_I, &top) && A[top] == twoer_5(A, O_I, &top))
            {
                if (A[top] == oner_5(A, O_I, &top) && A[top] == twoer_5(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_5(A, O_I, &top) <= (cap - top) / 2 || oner_5(A, O_I, &top) == twoer_5(A, O_I, &top))
            {

                while (A[top] != oner_5(A, O_I, &top))
                {
                    if (A[top] == oner_5(A, O_I, &top))
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
                while (A[top] != oner_5(A, O_I, &top))
                {
                    if (A[top] == oner_5(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (twoer_position_5(A, O_I, &top) <= (cap - top) / 2 || oner_5(A, O_I, &top) == twoer_5(A, O_I, &top))
            {
                while (A[top] != twoer_5(A, O_I, &top))
                {
                    if (A[top] == oner_5(A, O_I, &top))
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
                while (A[top] != twoer_5(A, O_I, &top))
                {
                    if (A[top] == oner_5(A, O_I, &top))
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

        while (top > 170 && top <= top2 - 1)
        {

            if (A[top] == oner_6(A, O_I, &top) && A[top] == twoer_6(A, O_I, &top))
            {
                if (A[top] == oner_6(A, O_I, &top) && A[top] == twoer_6(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_6(A, O_I, &top) <= (cap - top) / 2 || oner_6(A, O_I, &top) == twoer_6(A, O_I, &top))
            {

                while (A[top] != oner_6(A, O_I, &top))
                {
                    if (A[top] == oner_6(A, O_I, &top))
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
                while (A[top] != oner_6(A, O_I, &top))
                {
                    if (A[top] == oner_6(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (twoer_position_6(A, O_I, &top) <= (cap - top) / 2 || oner_6(A, O_I, &top) == twoer_6(A, O_I, &top))
            {
                while (A[top] != twoer_6(A, O_I, &top))
                {
                    if (A[top] == oner_6(A, O_I, &top))
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
                while (A[top] != twoer_6(A, O_I, &top))
                {
                    if (A[top] == oner_6(A, O_I, &top))
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

        while (top > 123 && top <= top2 - 1)
        {

            if (A[top] == oner_7(A, O_I, &top) && A[top] == twoer_7(A, O_I, &top))
            {
                if (A[top] == oner_7(A, O_I, &top) && A[top] == twoer_7(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_7(A, O_I, &top) <= (cap - top) / 2 || oner_7(A, O_I, &top) == twoer_7(A, O_I, &top))
            {

                while (A[top] != oner_7(A, O_I, &top))
                {
                    if (A[top] == oner_7(A, O_I, &top))
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
                while (A[top] != oner_7(A, O_I, &top))
                {
                    if (A[top] == oner_7(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (twoer_position_7(A, O_I, &top) <= (cap - top) / 2 || oner_7(A, O_I, &top) == twoer_7(A, O_I, &top))
            {
                while (A[top] != twoer_7(A, O_I, &top))
                {
                    if (A[top] == oner_7(A, O_I, &top))
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
                while (A[top] != twoer_7(A, O_I, &top))
                {
                    if (A[top] == oner_7(A, O_I, &top))
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

        while (top > 76 && top <= top2 - 1)
        {

            if (A[top] == oner_8(A, O_I, &top) && A[top] == twoer_8(A, O_I, &top))
            {
                if (A[top] == oner_8(A, O_I, &top) && A[top] == twoer_8(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_8(A, O_I, &top) <= (cap - top) / 2 || oner_8(A, O_I, &top) == twoer_8(A, O_I, &top))
            {

                while (A[top] != oner_8(A, O_I, &top))
                {
                    if (A[top] == oner_8(A, O_I, &top))
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
                while (A[top] != oner_8(A, O_I, &top))
                {
                    if (A[top] == oner_8(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (twoer_position_8(A, O_I, &top) <= (cap - top) / 2 || oner_8(A, O_I, &top) == twoer_8(A, O_I, &top))
            {
                while (A[top] != twoer_8(A, O_I, &top))
                {
                    if (A[top] == oner_8(A, O_I, &top))
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
                while (A[top] != twoer_8(A, O_I, &top))
                {
                    if (A[top] == oner_8(A, O_I, &top))
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

        while (top > 29 && top <= top2 - 1)
        {

            if (A[top] == oner_9(A, O_I, &top) && A[top] == twoer_9(A, O_I, &top))
            {
                if (A[top] == oner_9(A, O_I, &top) && A[top] == twoer_9(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_9(A, O_I, &top) <= (cap - top) / 2 || oner_9(A, O_I, &top) == twoer_9(A, O_I, &top))
            {

                while (A[top] != oner_9(A, O_I, &top))
                {
                    if (A[top] == oner_9(A, O_I, &top))
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
                while (A[top] != oner_9(A, O_I, &top))
                {
                    if (A[top] == oner_9(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (twoer_position_9(A, O_I, &top) <= (cap - top) / 2 || oner_9(A, O_I, &top) == twoer_9(A, O_I, &top))
            {
                while (A[top] != twoer_9(A, O_I, &top))
                {
                    if (A[top] == oner_9(A, O_I, &top))
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
                while (A[top] != twoer_9(A, O_I, &top))
                {
                    if (A[top] == oner_9(A, O_I, &top))
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

        while (top > 29 && top <= top2 - 1)
        {

            if (A[top] == oner_10(A, O_I, &top) && A[top] == twoer_10(A, O_I, &top))
            {
                if (A[top] == oner_10(A, O_I, &top) && A[top] == twoer_10(A, O_I, &top))
                {
                    pb(A, &top, &top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
            }

            if (oner_position_10(A, O_I, &top) <= (cap - top) / 2 || oner_10(A, O_I, &top) == twoer_10(A, O_I, &top))
            {

                while (A[top] != oner_10(A, O_I, &top))
                {
                    if (A[top] == oner_10(A, O_I, &top))
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
                while (A[top] != oner_10(A, O_I, &top))
                {
                    if (A[top] == oner_10(A, O_I, &top))
                    {
                        pb(A, &top, &top2, cap);
                        ft_putstr("pb\n");
                        break;
                    }
                    rra(A, &top, &top2);
                    ft_putstr("rra\n");
                }
            }

            if (twoer_position_10(A, O_I, &top) <= (cap - top) / 2 || oner_10(A, O_I, &top) == twoer_10(A, O_I, &top))
            {
                while (A[top] != twoer_10(A, O_I, &top))
                {
                    if (A[top] == oner_10(A, O_I, &top))
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
                while (A[top] != twoer_10(A, O_I, &top))
                {
                    if (A[top] == oner_10(A, O_I, &top))
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

        while (top > 0 && top <= top2 - 1)
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

        int top_uni = cap -1;
        
        while (top <= 498)
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

            if (oner_position_big_(A, O_I, &top2) <= (cap - top) / 2)
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
