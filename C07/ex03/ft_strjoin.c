/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 20:04:42 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/22 16:18:23 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//#include <unistd.h>

int	len(char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size_of_dest;
	int	count;

	count = 0;
	size_of_dest = 0;
	while (dest[size_of_dest])
	{
		size_of_dest++ ;
	}
	while (src[count])
	{
		dest[size_of_dest] = src[count];
		size_of_dest++;
		count++;
	}
	dest[size_of_dest] = '\0';
	return (dest);
}

void	*empty(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		count;
	int		length_of_words;

	count = 0;
	if (size == 0)
		return (empty());
	while (count < size)
		length_of_words = length_of_words + len(strs[count++]);
	string = malloc((len(sep) * (size - 1)) + length_of_words + 1);
	count = 0;
	while (count < size)
	{
		ft_strcat(string, strs[count]);
		if (count < size - 1)
			ft_strcat(string, sep);
		count++;
	}
	return (string);
}
/*
int	main()
{
	char	*ba[] ={"bassel","ammar", "ahmad"};
	char	*pe = " - ";
	printf("%s", ft_strjoin(3, ba, pe));

}*/
