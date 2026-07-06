/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:44:56 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/17 16:18:23 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;
	int	i;

	i = 1;
	count = 0;
	while (argc > i)
	{
		count = 0;
		while (argv[i][count])
		{
			write(1, &argv[i][count], 1);
			count++;
		}
		i++;
		write(1, "\n", 1);
	}
}
