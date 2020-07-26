#include "checker.h"

void Print(int *top, int *A) {
	int i;
    printf("Stack a starts here\n");
	for (i = *top; i >= 0; --i)
		printf("%d\n",A[i]);
}

void PrintB(int *top2, int *A, int cap) {
	int i;
    printf("Stack b starts here\n");
	for (i = *top2; i < cap; ++i){
		printf("%d\n",A[i]);
        }
}

void Push(int x, int *A, int *top, int *top2) 
{
  if(top <= top2 -1) { // overflow case. 
  A[++*top] = x;
  }
  else
  {
      ft_putstr("Error: stack overflow\n");
    }
}

void PushB(int z, int *A, int *top, int *top2)
{
    if(top <= top2 -1) { // overflow case. 
    A[--*top2] = z;
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
            printf ("%d is in in error\n", popped_value);}
    }
    else
    {
        printf ("Stack Empty! Cannot Pop\n");
    }
}

void PopB(int *A, int cap, int *top2) 
{
	if (*top2 < cap)
    {
        int popped_value = A[top2[0]++];
        if(*top2 > cap){
            printf ("%d is in in error\n", popped_value);}
    }
    else
    {
        printf ("Stack Empty! Cannot Pop\n");
    }
}