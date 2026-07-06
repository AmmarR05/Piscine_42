/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 00:41:28 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/21 01:05:18 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
char	*ft_strdup(char *src)
{
	char	*copy;
	int		count;

	count = 0;
	while (src[count])
		count++;
	copy = malloc(sizeof(char) * (count + 1));
	count = 0;
	while (src[count])
	{
		copy[count] = src[count];
		count++;
	}
	copy[count] = '\0';
	return (copy);
}
/*
int main(void)
{
	char src[5] = "ammar";
	printf("%s" , ft_strdup(src));
}*/
