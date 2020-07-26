#ifndef TEST_H
#define TEST_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../libft/libft.h"

void    Push_init(int x);
void    Push(int x, int *A, int *top, int *top2);
void    PushB(int z, int *A, int *top, int *top2);
void    Pop(int *A, int *top, int *top2, int cap);
void    PopB(int *A, int cap, int *top2);
void    Print(int *top, int *A);
void    PrintB(int *top2, int *A, int cap);
void	sa(int *A, int *top, int *top2);
void	sb(int *A, int *top, int *top2);
void	pb(int *A, int *top, int *top2, int cap);
void	pa(int *A, int *top, int *top2, int cap);
void	ra(int *A, int *top, int *top2);
void	rb(int *A, int *top, int *top2, int top_uni);
void	rra(int *A, int *top, int *top2);
void	rrb(int *A, int *top, int *top2, int top_uni);
void	ss(int *A, int *top, int *top2);
void	rr(int *A, int *top, int *top2, int top_uni);
void	rrr(int *A, int *top, int *top2, int top_uni);
void    first3_large(int *A, int *top, int *top2);
int		sort_check(int *A, int *top, int *top2);
int		sort_check_b(int *A, int *top, int *top2, int top_uni);
void    ft_swap(int *a, int *b);
void    stack_string(char **string);
int     both_stacks_check1(int argc, char **argv);
int     both_stacks_check(int argc, char **argv);
int     largest(int *A, int *top);
void    sorter(int *A, int *top, int *top2,int cap);
int		check_dup(int argc, char **argv, int i);
int		check_digit(int argc, char **argv, int i);
int		int_size_check(int argc, char **argv, int i);
void    stack(int argc, char **argv);
int		Min(char *str);
int		Max(char *str);
int		intiger_check(int a, int a1);
int		operators(char *ops, int *A, int top, int top2, int op, int top_uni);
void	end(int *A, int top, int top2);
void    first3_small(int *A, int *top, int *top2, int cap);
int     smallest(int *A, int *top);
void    order_imp(int *O_I, int *top_oi, int *top2_oi, int cap);
void    finaliser(int *A, int *top, int *top2, int cap, int top_uni);
void    finaliser2(int *A, int *top, int *top2);
void    finaliser2_b(int *A, int *top, int *top2);
void    putback(int *A, int *top, int *top2, int cap, int top_uni);
int     midpoint10(int *A,int cap);
int     midpoint10_B(int *A, int *top2,int cap);
void    first3_small_amended(int *A, int *top, int *top2, int cap);
void    Print2(int *top, int *A);
void    PrintB2(int *top2, int *A, int cap);
void    Print2(int *top_oi, int *O_I);
void    PrintB2(int *top2_oi, int *O_I, int cap_oi);
void Pop_oi(int *O_I, int *top_oi, int *top2_oi, int cap);
void PopB_oi(int *O_I, int cap, int *top2_oi);
void PushB_oi(int z, int *O_I, int *top_oi, int *top2_oi);
void Push_oi(int x, int *O_I, int *top_oi, int *top2_oi);
void Push_oi_init(int x, int *O_I, int top_oi, int top2_oi);
void	ra_oi(int *O_I, int *top_oi, int *top2_oi);
void	pa_oi(int *O_I, int *top_oi, int *top2, int cap);
void	pb_oi(int *O_I, int *top_oi, int *top2_oi, int cap);
int     smallest_oi(int *O_I, int *top_oi);
int		sort_check_oi(int *O_I, int *top_oi, int *top2_oi);
void    new100(int *O_I, int *A,int *top,int *top2,int cap);
int     oner(int *A,int *O_I,int *top);
int     twoer(int *A,int *O_I,int *top);
void    int_sort(int *A, int *top, int *top2, int cap,int *small);
int     smallest_position(int *A, int *top);
int    oner_position(int *A,int *O_I,int *top);
int    twoer_position(int *A,int *O_I, int *top);
int    largestB(int *A, int *top2);
int    biggestB_position(int *O_I,int *A, int *top2);
int oner_position2(int *A, int *O_I, int *top);
int twoer_position2(int *A, int *O_I, int *top);
int twoer2(int *A, int *O_I, int *top);
int oner2(int *A, int *O_I, int *top);
int oner_position3(int *A, int *O_I, int *top);
int twoer_position3(int *A, int *O_I, int *top);
int twoer3(int *A, int *O_I, int *top);
int oner3(int *A, int *O_I, int *top);
int oner_position4(int *A, int *O_I, int *top);
int twoer_position4(int *A, int *O_I, int *top);
int twoer4(int *A, int *O_I, int *top);
int oner4(int *A, int *O_I, int *top);
int oner_position5(int *A, int *O_I, int *top);
int twoer_position5(int *A, int *O_I, int *top);
int twoer5(int *A, int *O_I, int *top);
int oner5(int *A, int *O_I, int *top);
int     oner_big(int *A,int *O_I,int *top2);
int     twoer_big(int *A,int *O_I,int *top2);
int    oner_position_big(int *A,int *O_I,int *top2);
int    twoer_position_big(int *A,int *O_I, int *top2);
int lock(int *O_I, int *A, int *top2);
int biggy(int *O_I,int *top2);
void stackmirror(int *O_I, int *top_oi, int *top2_oi, int cap);
void fourth20(int *A, int *O_I, int *top, int *top2, int cap);
void third20(int*A, int *O_I, int *top, int *top2, int cap);
void second20(int *A, int *O_I, int *top, int *top2, int cap);
void fisrt20(int *A, int *O_I, int *top, int *top2, int cap);
void last_10(int *A, int *O_I, int *top, int *top2, int cap);
void putback_to_A(int *A, int *O_I, int *top, int *top2, int cap);

#endif