/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 18:44:58 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/09 12:00:20 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
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
		else if (str[count] >= 'a' && str[count] <= 'z')
		{
			number = 1;
			count++;
		}
		else
			return (0);
	}
	return (number);
}
/*
int main(void)
{
	char x[] = "amZmarA";
	int a = ft_str_is_alpha(x)+'0';
	write(1,&a,1);
}*/
