/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 19:13:50 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/07 23:18:32 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;
	int	number;

	number = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
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
	int a = ft_str_is_lowercase(x)+'0';
	write(1,&a,1);
}*/
