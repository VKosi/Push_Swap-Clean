#include "push_swap.h"

int biggestB_position(int *O_I, int *A, int *top2)
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
}

int twoer_position(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer(A, O_I, top);

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

int oner_position(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner(A, O_I, top);

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

int oner(int *A, int *O_I, int *top)
{
    int r;
    int mac;

    r = 0;
    mac = *top;
    while (mac >= 0)
    {
        if (A[mac] >= O_I[99] && A[mac] <= O_I[80])
        {
            r = A[mac];
            return (r);
            break;
        }
        mac--;
    }
    return (r);
}

int twoer(int *A, int *O_I, int *top)
{
    int r;
    int dot;

    r = 0;
    dot = 0;
    while (dot <= *top)
    {
        if (A[dot] >= O_I[99] && A[dot] <= O_I[80])
        {
            r = A[dot];
            return (r);
            break;
        }
        dot++;
    }
    return (r);
}

int oner2(int *A, int *O_I, int *top)
{
    int r;
    int mac;

    r = 0;
    mac = *top;
    while (mac >= 0)
    {
        if (A[mac] >= O_I[79] && A[mac] <= O_I[60])
        {
            r = A[mac];
            return (r);
            break;
        }
        mac--;
    }
    return (r);
}

int twoer2(int *A, int *O_I, int *top)
{
    int r;
    int dot;

    r = 0;
    dot = 0;
    while (dot <= *top)
    {
        if (A[dot] >= O_I[79] && A[dot] <= O_I[60])
        {
            r = A[dot];
            return (r);
            break;
        }
        dot++;
    }
    return (r);
}

int twoer_position2(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer2(A, O_I, top);

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

int oner_position2(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner2(A, O_I, top);

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