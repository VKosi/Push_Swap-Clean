#include "push_swap.h"

int twoer_position_big(int *A, int *O_I, int *top2)
{
    int r;
    int smal;
    int twoest = O_I[*top2];

    r = *top2;
    smal = 1;
    while (smal < top2[0] + 1)
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

int oner_position_big(int *A, int *O_I, int *top2)
{
    int r;
    int smal;
    int onest = O_I[*top2];

    r = *top2;
    smal = 1;
    while (smal <= 99)
    {
        if (r)
        {
            while (A[r] != onest)
            {
                if (A[r] == onest)
                {
                    r++;
                    smal++;
                    break;
                }
                r++;
                smal++;
            }
            return (smal);
        }
    }
    return (0);
}

int oner_big(int *A, int *O_I, int *top2)
{
    int r;
    int mac;

    r = 0;
    mac = *top2;
    while (mac >= 0)
    {
        if (A[mac] == O_I[*top2])
        {
            r = A[mac];
            return (r);
            break;
        }
        mac--;
    }
    return (r);
}

int twoer_big(int *A, int *O_I, int *top2)
{
    int r;
    int dot;

    r = 0;
    dot = 0;
    while (dot <= *top2)
    {
        if (A[dot] == O_I[*top2])
        {
            r = A[dot];
            return (r);
            break;
        }
        dot++;
    }
    return (r);
}

int biggy(int *O_I,int *top2)
{
    return(O_I[*top2]);
}