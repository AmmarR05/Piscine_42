/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 00:49:23 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/08 01:04:21 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] = str[count] - 32 ;
		count ++;
	}
	return (str);
}
/*
int main(void)
{
	char x[] = "ammar Rida";
	int count =0;
	char *a[] = ft_strupcase(x);
	while(count <= 10)
	{
		char x = a[count];
		write(1,&x,1);
	}
}*/
