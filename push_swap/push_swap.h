/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:59:19 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/15 14:47:26 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_elem
{
	int	value;
	int	index;
}	t_elem;

typedef struct s_struct
{
	t_elem	*a;
	t_elem	*b;
	int		asize;
	int		bsize;
	int		count;
}	t_struct;

void	pa(t_struct *st);
void	pb(t_struct *st);
void	ra(t_struct *st);
void	rra(t_struct *st);
void	rr(t_struct *st);
void	rb(t_struct *st);
void	rrb(t_struct *st);
void	rrr(t_struct *st);
void	sb(t_struct *st);
void	sa(t_struct *st);
void	ss(t_struct *st);
void	sort(int *tab, int size);
void	tabcopy(t_elem *a, int *tmp, int size);
void	indexoftab(t_struct *st, t_elem *el);
int		max_bits(t_struct *st);
void	radixsort(t_struct *st);
int		issorted(int argc, char **argv);
void	sortthree(t_struct *st);
void	freeall(t_struct *st);
int		ft_atoi(const char *nptr);
int		countsplit(int argc, char **argv);
char	**ft_split(char const *s, char c);
void	free_tab(char **tab, int i);
int		notinteger(char *s);
int		doubleinteger(int argc, char **argv);
int		upintmaxandmin(const char *nptr);
int		forerror(int argc, char **argv);
char	**forargc(int argc, char **argv, int *count, int *needfree);
void	valuefora(t_struct *st, char **argv);
char	*lencountandmalloc(const char *str, char c);
int		count(const char *str, char c);
void	sortfive(t_struct *st);

#endif
