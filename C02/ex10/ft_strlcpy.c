/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 18:44:58 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/08 23:19:02 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (src[count] && count <= (size - 1))
	{
		dest[count] = src[count];
		count ++;
	}
	dest[count] = '\0';
	count = 0;
	while (src[count])
	{
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	char d[1000];
	char s[] = "123ammarlkjhg";
	printf("%d" , ft_strlcpy(d, s, 10));
}
*/
