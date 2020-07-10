#ifndef TEST_H
#define TEST_H

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include "../libft/libft.h"

void    Push_init(int x);
void    Push(int x, int *A, int *top, int *top2);
void    PushB(int z, int *A, int *top, int *top2);
void    Pop(int *A, int *top, int *top2, int cap);
void    PopB(int *A, int cap, int *top2);
void    Print(int *top, int *A) ;
void    PrintB(int *top2, int *A, int cap);
void	sa(int *A, int *top, int *top2);
void	sb(int *A, int *top, int *top2, int cap);
void	pb(int *A, int *top, int *top2, int cap);
void	pa(int *A, int *top, int *top2, int cap);
void	ra(int *A, int *top, int *top2);
void	rb(int *A, int *top, int *top2, int top_uni);
void	rra(int *A, int *top, int *top2);
void	rrb(int *A, int *top, int *top2, int top_uni);
void	ss(int *A, int *top, int *top2, int cap);
void	rr(int *A, int *top, int *top2, int top_uni);
void	rrr(int *A, int *top, int *top2, int top_uni);
int     first3_large(int *A, int *top, int *top2);
int		sort_check(int *A, int *top, int *top2);
int		sort_check_b(int *A, int *top, int *top2, int top_uni);
void    stack_string(char **string);
void    stack(int argc, char **argv);
int		check_dup(int argc, char **argv, int i);
int		check_digit(int argc, char **argv, int i);
int		int_size_check(int argc, char **argv, int i);
int     both_stacks_check(int argc, char **argv);
int		Min(char *str);
int		Max(char *str);
int		intiger_check(int a, int a1);
int		operators(char *ops, int *A, int *top, int *top2, int i, int top_uni, int cap);
void	end(int *A, int *top, int *top2, int top_uni);

#endif