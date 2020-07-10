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
    while(sort_check(A,&top,&top2) != top)
    {
        if(sort_check(A,&top,&top2) != top)
        {
            if(sort_check(A,&top,&top2) != top){
            smallest(A,&top);
            first3_small(A,&top,&top2,cap);
            }
        }
    }
    while(sort_check(A,&top,&top2) == top && top != top_uni)
    {
        pa(A, &top, &top2, cap);
        ft_putstr("pa\n");
    }

    free(A);
}

void    stack(int argc, char **argv)
{

    int *A;
    int top;
    int cap = argc -1;
    int top2;
    int top_uni = cap-1;
    int f = 0;

    top2 = cap;
    A = malloc((argc - 1) * sizeof (int));
    while (argc > 1)
    {
        A[f++] = ft_atoi(argv[--argc]);
    }
    top = f - 1;
    while(sort_check(A,&top,&top2) != top)
    {
        if(sort_check(A,&top,&top2) != top)
        {
            if(sort_check(A,&top,&top2) != top){
            smallest(A,&top);
            first3_small(A,&top,&top2,cap);
            }
        }
    }
    while(sort_check(A,&top,&top2) == top && top != top_uni)
    {
        pa(A, &top, &top2, cap);
        ft_putstr("pa\n");
    }

    free(A);
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