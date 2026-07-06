/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:30:04 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/14 16:12:23 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size_of_dest;
	unsigned int	count;

	count = 0;
	size_of_dest = 0;
	while (dest[size_of_dest])
	{
		size_of_dest++ ;
	}
	while (src[count] && count < nb)
	{
		dest[size_of_dest] = src[count];
		size_of_dest++;
		count++;
	}
	dest[size_of_dest] = '\0';
	return (dest);
}
/*
int main(void)
{
        char arr1[] = "gmmara ";
        char arr2[] = "ammwad";
        printf("%s" , ft_strncat(arr1 , arr2 , 6));

}
*/
