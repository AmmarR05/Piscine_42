/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:30:24 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/17 15:44:13 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	if (argc == 1)
	{
		while (argv[0][count])
		{
			write(1, &argv[0][count], 1);
			count++;
		}
	}
	write(1, "\n", 1);
}
