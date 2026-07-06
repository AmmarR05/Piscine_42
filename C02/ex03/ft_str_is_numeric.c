/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 19:13:50 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/07 22:38:16 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	count;
	int	number;

	number = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			number = 1;
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
/*
int main(void)
{
	char x[] = "121A21";
	int a = ft_str_is_numeric(x)+'0';
	write(1,&a,1);
}*/
