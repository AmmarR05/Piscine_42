/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:48:17 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/08 22:16:37 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] = str[count] + 32 ;
		count ++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	count = 0;
	while (str[count])
	{
		if (!((str[count] >= 'a' && str[count] <= 'z')
				|| (str[count] >= 'A' && str[count] <= 'Z')
				|| (str[count] >= '0' && str[count] <= '9')))
		{
			if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
				str[count + 1] = str[count + 1] - 32;
		}
		count++;
	}
	return (str);
}
/*
int main(void)
{
	char x[] ="Hi, how are you? 42words forty-two;*fifty+and+one"; 
	printf("%s", ft_strcapitalize(x));
}
*/
