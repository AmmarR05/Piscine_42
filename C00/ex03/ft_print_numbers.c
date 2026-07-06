/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 22:54:41 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/02 23:04:55 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = '0' ;
	while (numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
	return 0 ;
}
*/
