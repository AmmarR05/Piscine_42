/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 19:13:50 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/08 00:48:04 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	count;
	int	number;

	count = 0;
	number = 1;
	while (str[count] != '\0')
	{
		if (str[count] >= ' ' && str[count] <= '~')
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
	char x[] = "AMMARRcIDAREDWAN";
	int a = ft_str_is_printable(x)+'0';
	write(1,&a,1);
}
*/
