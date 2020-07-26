#include "push_swap.h"

void Print2(int *top_oi, int *O_I) {
	int i;
    printf("Stack a starts here\n");
	for (i = top_oi[0]; i >= 0; --i)
		printf("%d\n",O_I[i]);
}

void PrintB2(int *top2_oi, int *O_I, int cap) {
	int i;
    printf("Stack b starts here\n");
	for (i = top2_oi[0]; i < cap; ++i){
		printf("%d\n",O_I[i]);
        }
}

void Push_oi(int x, int *O_I, int *top_oi, int *top2_oi) 
{
  if(top_oi <= top2_oi -1) { // overflow case. 
  O_I[++*top_oi] = x;
  }
  else
  {
      ft_putstr("Error: stack overflow\n");
    }
}

void Push_oi_init(int x, int *O_I, int top_oi, int top2_oi) 
{
  if(top_oi <= top2_oi -1) { // overflow case. 
  O_I[++top_oi] = x;
  }
  else
  {
      ft_putstr("Error: stack overflow\n");
    }
}

void PushB_oi(int z, int *O_I, int *top_oi, int *top2_oi)
{
    if(top_oi <= top2_oi -1) { // overflow case. 
    O_I[--top2_oi[0]] = z;
    }
    else
    {
        ft_putstr("Error cant push");
    }
}

void Pop_oi(int *O_I, int *top_oi, int *top2_oi, int cap)
{
    if (*top_oi>= 0)
    {
        int popped_value = O_I[top_oi[0]--];
        if(*top2_oi > cap){
            printf ("%d is in in error\n", popped_value);}
    }
    else
    {
        printf ("Stack Empty! Cannot Pop\n");
    }
}

void PopB_oi(int *O_I, int cap, int *top2_oi) 
{
	if (*top2_oi < cap)
    {
        int popped_value = O_I[top2_oi[0]++];
        if(*top2_oi > cap){
            printf ("%d is in in error\n", popped_value);}
    }
    else
    {
        printf ("Stack Empty! Cannot Pop\n");
    }
}

void		pa_oi(int *O_I, int *top_oi, int *top2_oi, int cap)
{
	PopB_oi(O_I,cap,top2_oi);
    Push_oi(O_I[*top2_oi-1],O_I,top_oi,top2_oi);
}

void		pb_oi(int *O_I, int *top_oi, int *top2_oi, int cap)
{
	Pop_oi(O_I,top_oi,top2_oi,cap);
    PushB_oi(O_I[*top_oi+1],O_I,top_oi,top2_oi);
}

void	ra_oi(int *O_I, int *top_oi, int *top2_oi)
{
	int r;

	r = *top_oi;
    if(top_oi <= top2_oi -1)
    while(r > 0)
    {
        ft_swap(&O_I[r], &O_I[r - 1]);--r;
    }
}

int    smallest_oi(int *O_I, int *top_oi)
{
    int r;
    int smal;

    r = O_I[0];
    smal = 1;
    while(smal < top_oi[0]+1)
    {
        if(r > O_I[smal]){
        r = O_I[smal];}
        smal++;
    }
    return(r);
}

int		sort_check_oi(int *O_I, int *top_oi, int *top2_oi)//if check sort = top the stack is sorted
{
    int r;
    int count;

	r = *top_oi;
    count = 0;
	if (top_oi <= top2_oi -1)
	{
        if(r > 0)
        {
            while(O_I[r] < O_I[r - 1])
            {
                r--;
                count++;
            }
            return(count - r);
        }
    }
    return(0);
}