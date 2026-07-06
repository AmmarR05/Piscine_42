/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:45:50 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/14 00:21:09 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (s1[count] && s2[count] && count < n - 1)
	{
		if (s1[count] != s2[count])
			return ((unsigned char) s1[count] - (unsigned char) s2[count]);
		count++;
	}
	return (0);
}
/*
int main(void)
{
	char arr1[] = "amma";
	char arr2[] = "ammw";
	printf("%d" , ft_strncmp(arr1 , arr2 , 3));
}
*/
