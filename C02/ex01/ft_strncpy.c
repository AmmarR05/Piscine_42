/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 19:21:56 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/06 20:13:44 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	count;

	count = 0 ;
	while (str[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++
		}
			while (count < n)
		{
			dest[count] = '\0';
		count++;
		}
	return (dest);
	}
