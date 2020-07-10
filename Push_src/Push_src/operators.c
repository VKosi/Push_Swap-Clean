#include "push_swap.h"

void Push(int x, int *A, int *top, int *top2) 
{
  if(top <= top2 -1) { /* overflow case. */
  A[++top[0]] = x;
  }
  else
  {
      ft_putstr("Error: stack overflow\n");
    }
}

void PushB(int z, int *A, int *top, int *top2)
{
    if(top <= top2 -1) { /* overflow case. */
    A[--top2[0]] = z;
    }
    else
    {
        ft_putstr("Error cant push");
    }
}

void Pop(int *A, int *top, int *top2, int cap)
{
    if (*top >= 0)
    {
        int popped_value = A[top[0]--];
        if(*top2 > cap){
            ft_putnbr(popped_value);}
    }
    else
    {
        ft_putstr("Stack Empty! Cannot Pop\n");
    }
}

void PopB(int *A, int cap, int *top2) 
{
	if (*top2 < cap)
    {
        int popped_value = A[top2[0]++];
        if(*top2 > cap){
            ft_putnbr(popped_value);}
    }
    else
    {
        ft_putstr ("Stack Empty! Cannot Pop\n");
    }
}

void	sa(int *A, int *top, int *top2)
{
    if(top <= top2 -1)
    ft_swap(&A[*top], &A[*top -1]);		
}

void	sb(int *A, int *top, int *top2, int cap)
{
	if(*top2 != cap){
    if(top <= top2 -1)
    ft_swap(&A[*top2], &A[*top2 +1]);}
    else
    {
        ft_putstr("Stack B is empty!");
    }
}

void		pa(int *A, int *top, int *top2, int cap)
{
	if(*top2 != cap){
    PopB(A,cap,top2);
    Push(A[*top2-1],A,top,top2);}
    else
    {
        ft_putstr("Stack B is empty!");
    }
}

void		pb(int *A, int *top, int *top2, int cap)
{
	Pop(A,top,top2,cap);
    PushB(A[*top+1],A,top,top2);
}

void	ra(int *A, int *top, int *top2)
{
	int r;

	r = *top;
    if(top <= top2 -1)
    while(r > 0)
    {
        ft_swap(&A[r], &A[r - 1]);--r;
    }
}

void	rb(int *A, int *top, int *top2, int top_uni)
{
	if(top != top2){
    int r;

	r = *top2;
    if(top <= top2 -1)
    while(r <= top_uni-1){
    ft_swap(&A[r], &A[r + 1]);++r;}}
    else
    {
        ft_putstr("Stack B is empty!");
    }
    
}

void	rra(int *A, int *top, int *top2)
{
	int r;
    int bottom = 0;
    
	r = bottom;
    if(top <= top2 -1)
    while(r < *top)
    {
        ft_swap(&A[r], &A[r + 1]);r++;
    }
}

void	rrb(int *A, int *top, int *top2, int top_uni)
{
	if(top != top2){
    int r;

	r = top_uni-1;
    if(top <= top2 -1)
    while(r > *top2){
    ft_swap(&A[r], &A[r - 1]);--r;}}
    else
    {
        ft_putstr("Stack B is empty!");
    }
    
}

void	ss(int *A, int *top, int *top2, int cap)
{
	sa(A, top, top2);
	sb(A, top, top2,cap);
}

void	rr(int *A, int *top, int *top2, int top_uni)
{
	ra(A, top, top2);
	rb(A, top, top2,top_uni);
}

void	rrr(int *A, int *top, int *top2, int top_uni)
{
	rra(A, top, top2);
	rrb(A, top, top2, top_uni);
}

int		sort_check(int *A, int *top, int *top2)/*if check sort = top the stack is sorted*/
{
    int r;
    int count;

	r = *top;
    count = 0;
	if (top <= top2 -1)
	{
        if(r > 0)
        {
            while(A[r] < A[r - 1])
            {
                r--;
                count++;
            }
            return(count - r);
        }
    }
    return(0);
}

int		sort_check_b(int *A, int *top, int *top2, int top_uni)/*if check sort b = top2 the stack b is sorted*/
{
	int r;
    int count;

	r = *top2;
    count = 0;
	if (top <= top2 -1)
	{
        if(r < top_uni)
        {
            while(A[r] < A[r + 1])
            {
                r++;
                count++;
            }
            return(count - r);
        }
    }
    return(0);
}