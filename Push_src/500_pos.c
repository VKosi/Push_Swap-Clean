# include "push_swap.h"

/*int biggestB_position(int *O_I, int *A, int *top2)
{
    int r;
    int smal;
    int smalest = O_I[*top2];

    r = *top2;
    smal = 1;
    while (smal <= 99)
    {
        if (r > -1)
        {
            while (A[r] != smalest)
            {
                r++;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int lock(int *O_I, int *A, int *top2)
{
    return(biggestB_position(A, O_I, top2));
}*/

int twoer_position_(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int twoer_position_1(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_1(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_1(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_1(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int twoer_position_2(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_2(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_2(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_2(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int twoer_position_3(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_3(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_3(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_3(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int twoer_position_4(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_4(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_4(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_4(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int twoer_position_5(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_5(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_5(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_5(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int twoer_position_6(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_6(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_6(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_6(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int twoer_position_7(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_7(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_7(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_7(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int twoer_position_8(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_8(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_8(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_8(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int twoer_position_9(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_9(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_9(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_9(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int twoer_position_10(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer_10(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != twoest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_position_10(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner_10(A, O_I, top);

    r = *top;
    smal = 1;
    while (smal < top[0] + 1)
    {
        if (r > 0)
        {
            while (A[r] != onest)
            {
                r--;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}