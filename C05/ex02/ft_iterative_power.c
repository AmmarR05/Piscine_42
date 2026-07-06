/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:35:03 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/15 21:32:29 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	count;

	count = 0;
	res = 1;
	if (power < 0)
		return (0);
	else
	{
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
	}
	return (res);
}
/*
int main(void)
{
	printf("%d",ft_iterative_power(131, 0));
}*/
