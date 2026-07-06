/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:04:02 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/14 16:11:43 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
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
/*int main(void)
{
        char arr1[] = "gmmara ";
        char arr2[] = "ammwad";
        printf("%s" , ft_strcat(arr1 , arr2));
}
*/
