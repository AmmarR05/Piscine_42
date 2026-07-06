/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:57:45 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/04 17:33:54 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str [count] != '\0')
	{
		count ++ ;
	}
	return (count);
}
/*
int main()
{	
	char ar[] = "ammar";
	ft_strlen(ar);
	int x = ft_strlen(ar);
	char r = x+'0';
	write(1,&r,1);
	return 0;	
}
*/
