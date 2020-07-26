#include "push_swap.h"

int oner3(int *A, int *O_I, int *top)
{
    int r;
    int mac;

    r = 0;
    mac = *top;
    while (mac >= 0)
    {
        if (A[mac] >= O_I[59] && A[mac] <= O_I[40])
        {
            r = A[mac];
            return (r);
            break;
        }
        mac--;
    }
    return (r);
}

int twoer3(int *A, int *O_I, int *top)
{
    int r;
    int dot;

    r = 0;
    dot = 0;
    while (dot <= *top)
    {
        if (A[dot] >= O_I[59] && A[dot] <= O_I[40])
        {
            r = A[dot];
            return (r);
            break;
        }
        dot++;
    }
    return (r);
}

int twoer_position3(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer3(A, O_I, top);

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

int oner_position3(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner3(A, O_I, top);

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

int oner4(int *A, int *O_I, int *top)
{
    int r;
    int mac;

    r = 0;
    mac = *top;
    while (mac >= 0)
    {
        if (A[mac] >= O_I[39] && A[mac] <= O_I[20])
        {
            r = A[mac];
            return (r);
            break;
        }
        mac--;
    }
    return (r);
}

int twoer4(int *A, int *O_I, int *top)
{
    int r;
    int dot;

    r = 0;
    dot = 0;
    while (dot <= *top)
    {
        if (A[dot] >= O_I[39] && A[dot] <= O_I[20])
        {
            r = A[dot];
            return (r);
            break;
        }
        dot++;
    }
    return (r);
}

int twoer_position4(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer4(A, O_I, top);

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

int oner_position4(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner4(A, O_I, top);

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

int oner5(int *A, int *O_I, int *top)
{
    int r;
    int mac;

    r = 0;
    mac = *top;
    while (mac >= 0)
    {
        if (A[mac] >= O_I[19] && A[mac] >= O_I[0])
        {
            r = A[mac];
            return (r);
            break;
        }
        mac--;
    }
    return (r);
}

int twoer5(int *A, int *O_I, int *top)
{
    int r;
    int dot;

    r = 0;
    dot = 0;
    while (dot <= *top)
    {
        if (A[dot] >= O_I[19] && A[dot] >= O_I[0])
        {
            r = A[dot];
            return (r);
            break;
        }
        dot++;
    }
    return (r);
}

int twoer_position5(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int twoest = twoer5(A, O_I, top);

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

int oner_position5(int *A, int *O_I, int *top)
{
    int r;
    int smal;
    int onest = oner5(A, O_I, top);

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