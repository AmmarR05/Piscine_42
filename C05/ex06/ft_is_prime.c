/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:49:34 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/17 15:25:46 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	count;

	if (nb <= 1)
		return (0);
	count = 2;
	while (count < nb)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

int main(void)
{
	printf("%d" , ft_is_prime(4));
}
