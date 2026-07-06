/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:06:06 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/21 01:24:22 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	count;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = malloc(sizeof(int) * size);
	count = 0;
	while (min < max)
	{
		arr[count] = min;
		min++;
		count++;
	}
	return (arr);
}
/*
int main()
{
    int min = 20;
    int max = 20;
    int *arr = ft_range(min, max);
    
        for (int i = 0; i < (max - min); i++)
        {
            printf("%d", arr[i]);
        }
}*/
