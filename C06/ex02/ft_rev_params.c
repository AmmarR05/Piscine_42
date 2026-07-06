/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:19:19 by amradwan          #+#    #+#             */
/*   Updated: 2026/06/17 18:04:12 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	if (argc > 1)
	{
		while (argc > i)
		{
			count = 0;
			while (argv[argc - 1][count])
			{
				write(1, &argv[argc - 1][count], 1);
				count++;
			}
			argc--;
			write(1, "\n", 1);
		}
	}
}
