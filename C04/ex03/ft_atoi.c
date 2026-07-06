/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 16:37:11 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/13 17:06:05 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_atoi(char *str)
{
	int	count;
	int	number;
	int	neg;

	count = 0;
	number = 0;
	neg = 1;
	while (str[count] == 32 || (str[count] >= 9 && str[count] <= 13))
		count++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			neg = neg * -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		number = number * 10 +(str[count] - 48);
		count++;
	}
	return (number * neg);
}
int main(void)
{
	char ar[]="          -+--2147483648";
	printf("%d" , ft_atoi(ar));
}

