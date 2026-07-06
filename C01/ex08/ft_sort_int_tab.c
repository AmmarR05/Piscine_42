/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 20:44:17 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/07 16:48:45 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;
	int	outer;

	outer = 0;
	i = 0;
	j = 1;
	while (outer < (size - 1))
	{
		while (j != (size))
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			i ++;
			j ++;
		}
		i = 0;
		j = 1;
		outer ++;
	}
}
/*
#include <stdio.h>
int	main()
{
	int	ar[] = {12,1,3,0};
	int i = 0;
	ft_sort_int_tab(ar, 4);
	while (i < 4)
	{
		printf("%d ", ar[i]);
		i++;
	}
}*/
