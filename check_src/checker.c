#include "./checker.h"

int		operators(char *ops, int *A, int *top, int *top2, int i, int top_uni, int cap)
{
    if (ft_strcmp("sa", ops) == 0)
    {
       sa(A, top, top2);
    }
	else if (ft_strcmp("sb", ops) == 0)
    {
        sb(A, top, top2);
    }
	else if (ft_strcmp("ss", ops) == 0)
    {
        ss(A, top, top2);
    }
	else if (ft_strcmp("pa", ops) == 0)
	{
        pa(A, top, top2, cap);
    }
	else if (ft_strcmp("pb", ops) == 0)
	{
        pb(A, top, top2, cap);
    }
	else if (ft_strcmp("rb", ops) == 0)
	{
        rb(A, top, top2, top_uni);
    }
	else if (ft_strcmp("ra", ops) == 0)
	{
        ra(A, top, top2);
    }
	else if (ft_strcmp("rr", ops) == 0)
	{
        ra(A,top,top2);
        rb(A, top, top2, top_uni);
    }
	else if (ft_strcmp("rra", ops) == 0)
	{
        rra(A, top, top2);
    }
	else if (ft_strcmp("rrb", ops) == 0)
	{
        rrb(A, top, top2, top_uni);
    }
	else if (ft_strcmp("rrr", ops) == 0)
	{
        rra(A, top, top2);
        rrb(A, top, top2, top_uni);
    }
	else
		i = -1;
	return (i);/*operator checker*/
}

void    stack_string(char **string){
    
    int *A;
    int B[500];
    int cap;
    int top;
    char **string1;
    char *ops;
    int top2;
    int top_uni;
    int f = 0;
    int j = 0;
    int i = 0;
    
    string1 = ft_strsplit(string[1], ' ');
    while(string1[j])
    {
        B[j++] = ft_atoi(string1[f++]);   
    }

    cap = j;
    A = malloc((cap) * sizeof (int));
    top2 = cap;
    top_uni = top2 - 1;
    top = -1;
    while(j)
    {
        Push(B[--j],A,&top,&top2);
    }/*stack_a_loader*/
    
    while(get_next_line(0, &ops))
    {
        i = operators(ops, A, &top,&top2,i,top_uni,cap);
        if(i == -1)
            break ;
    }
    if (i != -1)
    	end(A,&top,&top2,top_uni);
	else
		ft_putstr("Error\n");

    free(A);
}

void    stack(int argc, char **argv){

    int *A;
    int top;
    char *ops;
    int cap = argc -1;
    int top2;
    int top_uni = cap-1;
    int f = 0;
    int i = 0;

    top2 = argc -1;
    A = malloc((argc - 1) * sizeof (int));
    while (argc > 1)
    {
        A[f++] = ft_atoi(argv[--argc]);
    }
    top = f - 1;
    while(get_next_line(0, &ops))
    {
        i = operators(ops, A, &top, &top2, i, top_uni, cap);
        if(i == -1)
            break ;
    }
    if (i != -1)
    	end(A,&top,&top2,top_uni);
	else
		ft_putstr("Error\n");

    free(A);
}

void	end(int *A, int *top, int *top2, int top_uni)
{
    if (sort_check(A,top,top2) == *top && (*top == top_uni))
		ft_putstr("OK\n");
    else
		ft_putstr("KO\n");
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