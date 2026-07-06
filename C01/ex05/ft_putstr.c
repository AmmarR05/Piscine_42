/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:26:24 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/07 16:45:59 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count ;

	count = 0 ;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count ++ ;
	}
}
/*
int main(void)
{
	char s[]="ammar";
	ft_putstr(s) ;
	
}
*/
