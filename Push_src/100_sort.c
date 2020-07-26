#include "push_swap.h"

void stackmirror(int *O_I, int *top_oi, int *top2_oi, int cap)
{
    int top_uni_oi = cap - 1;
    smallest_oi(O_I, top_oi);
    while (sort_check_oi(O_I, top_oi, top2_oi) != cap + 1 && top_oi)
    {
        int first;
        int smallestt = smallest_oi(O_I, top_oi);

        first = *top_oi;
        if (sort_check_oi(O_I, top_oi, top2_oi) != cap + 1)
        {
            if (top_oi <= top2_oi - 1)
            {
                if (top_oi)
                {
                    if (O_I[first] != smallestt)
                    {
                        ra_oi(O_I, top_oi, top2_oi);
                    }
                    else if (O_I[first] == smallestt)
                    {
                        if (sort_check_oi(O_I, top_oi, top2_oi) != cap + 1)
                        {
                            pb_oi(O_I, top_oi, top2_oi, cap);
                        }
                    }
                }
            }
        }
    }
    while (*top_oi != top_uni_oi)
    {
        pa_oi(O_I, top_oi, top2_oi, cap);
    }
}

void fourth20(int *A, int *O_I, int *top, int *top2, int cap)
{
    while (*top > 19 && top <= top2 - 1)
    {

        if (A[*top] == oner4(A, O_I, top) && A[*top] == twoer4(A, O_I, top))
        {
            if (A[*top] == oner4(A, O_I, top) && A[*top] == twoer4(A, O_I, top))
            {
                pb(A, top, top2, cap);
                ft_putstr("pb\n");
                break;
            }
        }

        if (oner_position4(A, O_I, top) <= (cap - *top) / 2 || oner4(A, O_I, top) == twoer4(A, O_I, top))
        {

            while (A[*top] != oner4(A, O_I, top))
            {
                if (A[*top] == oner4(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
                ra(A, top, top2);
                ft_putstr("ra\n");
            }
        }
        else
        {
            while (A[*top] != oner4(A, O_I, top))
            {
                if (A[*top] == oner4(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
                rra(A, top, top2);
                ft_putstr("rra\n");
            }
        }

        if (twoer_position4(A, O_I, top) <= (cap - *top) / 2 || oner4(A, O_I, top) == twoer4(A, O_I, top))
        {
            while (A[*top] != twoer4(A, O_I, top))
            {
                if (A[*top] == oner4(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }

                ra(A, top, top2);
                ft_putstr("ra\n");
            }
        }
        else 
        {
            while (A[*top] != twoer4(A, O_I, top)) 
            {
                if (A[*top] == oner4(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }

                rra(A, top, top2);
                ft_putstr("rra\n");
            }
        }
    }
}

void third20(int *A, int *O_I, int *top, int *top2, int cap)
{
    while (*top > 39 && top <= top2 - 1)
    {
        if (A[*top] == oner3(A, O_I, top) && A[*top] == twoer3(A, O_I, top))
        {
            if (A[*top] == oner3(A, O_I, top) && A[*top] == twoer3(A, O_I, top))
            {
                pb(A, top, top2, cap);
                ft_putstr("pb\n");
                break;
            }
        }

        if (oner_position3(A, O_I, top) <= (cap - *top) / 2 || oner3(A, O_I, top) == twoer3(A, O_I, top))
        {

            while (A[*top] != oner3(A, O_I, top))
            {
                if (A[*top] == oner3(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
                ra(A, top, top2);
                ft_putstr("ra\n");
            }
        }
        else 
        {
            while (A[*top] != oner3(A, O_I, top))
            {
                if (A[*top] == oner3(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
                rra(A, top, top2);
                ft_putstr("rra\n");
            }
        }

        if (A[*top] == oner3(A, O_I, top) && A[*top] == twoer3(A, O_I, top))
        {
            if (A[*top] == oner3(A, O_I, top) && A[*top] == twoer3(A, O_I, top))
            {
                pb(A, top, top2, cap);
                ft_putstr("pb\n");
                break;
            }
        }

        if (twoer_position3(A, O_I, top) <= (cap - *top) / 2 || oner3(A, O_I, top) == twoer3(A, O_I, top))
        {
            while (A[*top] != twoer3(A, O_I, top))
            {
                if (A[*top] == oner3(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }

                ra(A, top, top2);
                ft_putstr("ra\n");
            }
        }
        else 
        {
            while (A[*top] != twoer3(A, O_I, top)) 
            {
                if (A[*top] == oner3(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }

                rra(A, top, top2);
                ft_putstr("rra\n");
            }
        }
    }
}

void second20(int *A, int *O_I, int *top, int *top2, int cap)
{
    while (*top > 59 && top <= top2 - 1)
    {
        if (A[*top] == oner2(A, O_I, top) && A[*top] == twoer2(A, O_I, top))
        {
            if (A[*top] == oner2(A, O_I, top) && A[*top] == twoer2(A, O_I, top))
            {
                pb(A, top, top2, cap);
                ft_putstr("pb\n");
                break;
            }
        }

        if (oner_position2(A, O_I, top) <= (cap - *top) / 2 || oner2(A, O_I, top) == twoer2(A, O_I, top))
        {

            while (A[*top] != oner2(A, O_I, top))
            {
                if (A[*top] == oner2(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
                ra(A, top, top2);
                ft_putstr("ra\n");
            }
        }
        else
        {
            while (A[*top] != oner2(A, O_I, top))
            {
                if (A[*top] == oner2(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
                rra(A, top, top2);
                ft_putstr("rra\n");
            }
        }

        if (A[*top] == oner(A, O_I, top) && A[*top] == twoer(A, O_I, top))
        {
            if (A[*top] == oner(A, O_I, top) && A[*top] == twoer(A, O_I, top))
            {
                pb(A, top, top2, cap);
                ft_putstr("pb\n");
                break;
            }
        }

        if (twoer_position2(A, O_I, top) <= (cap - *top) / 2 || oner2(A, O_I, top) == twoer2(A, O_I, top))
        {
            while (A[*top] != twoer2(A, O_I, top))
            {
                if (A[*top] == oner2(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }

                ra(A, top, top2);
                ft_putstr("ra\n");
            }
        }
        else
        {

            int x;

            x = 0;
            while (A[*top] != twoer2(A, O_I, top))
            {
                if (A[*top] == oner2(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }

                rra(A, top, top2);
                ft_putstr("rra\n");
                x++;
            }
        }
    }
}

void fisrt20(int *A, int *O_I, int *top, int *top2, int cap)
{
    while (*top > 79 && top <= top2 - 1)
    {
        if (A[*top] == oner(A, O_I, top) && A[*top] == twoer(A, O_I, top))
        {
            if (A[*top] == oner(A, O_I, top) && A[*top] == twoer(A, O_I, top))
            {
                pb(A, top, top2, cap);
                ft_putstr("pb\n");
                break;
            }
        }

        if (oner_position(A, O_I, top) <= (cap - *top) / 2 || oner(A, O_I, top) == twoer(A, O_I, top))
        {

            while (A[*top] != oner(A, O_I, top))
            {
                if (A[*top] == oner(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
                ra(A, top, top2);
                ft_putstr("ra\n");
            }
        }
        else
        {
            while (A[*top] != oner(A, O_I, top))
            {
                if (A[*top] == oner(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }
                rra(A, top, top2);
                ft_putstr("rra\n");
            }
        }

        if (A[*top] == oner(A, O_I, top) && A[*top] == twoer(A, O_I, top))
        {
            if (A[*top] == oner(A, O_I, top) && A[*top] == twoer(A, O_I, top))
            {
                pb(A, top, top2, cap);
                ft_putstr("pb\n");
                break;
            }
        }

        if (twoer_position(A, O_I, top) <= (cap - *top) / 2)
        {
            while (A[*top] != twoer(A, O_I, top))
            {
                if (A[*top] == oner(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }

                ra(A, top, top2);
                ft_putstr("ra\n");
            }
        }
        else
        {

            int x;

            x = 0;
            while (A[*top] != twoer(A, O_I, top))
            {
                if (A[*top] == oner(A, O_I, top))
                {
                    pb(A, top, top2, cap);
                    ft_putstr("pb\n");
                    break;
                }

                rra(A, top, top2);
                ft_putstr("rra\n");
                x++;
            }
        }
    }
}

void last_10(int *A, int *O_I, int *top, int *top2, int cap)
{
    while (*top > 0 && top <= top2 - 1)
    {
        if (A[*top] != O_I[0])
        {
            pb(A, top, top2, cap);
            ft_putstr("pb\n");
        }
        else
        {
            ra(A, top, top2);
            ft_putstr("ra\n");
        }
    }
}

void putback_to_A(int *A, int *O_I, int *top, int *top2, int cap)
{
    int top_uni = cap - 1;

    while (*top != 99)
    {
        if (A[*top2] == O_I[*top2])
        {
            if (A[*top2] == O_I[*top2])
            {
                pa(A, top, top2, cap);
                ft_putstr("pa\n");
                // y++;
            }
        }

        if (oner_position_big(A, O_I, top2) <= (cap - *top) / 2)
        {
            while (A[*top2] <= biggy(O_I, top2))
            {
                if (A[*top2] == biggy(O_I, top2))
                {
                    pa(A, top, top2, cap);
                    ft_putstr("pa\n");
                    break;
                }
                else
                {
                    rb(A, top, top2, top_uni);
                    ft_putstr("rb\n");
                }
            }
        }
        else
        {
            while (A[*top2] <= O_I[*top2])
            {
                if (A[*top2] == O_I[*top2])
                {
                    pa(A, top, top2, cap);
                    ft_putstr("pa\n");
                    break;
                }
                else
                {
                    rrb(A, top, top2, top_uni);
                    ft_putstr("rrb\n");
                }
            }
        }
    }
}