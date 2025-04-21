/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:22 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/08 17:11:34 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int contador, char **argv)
{
	int	i;
	int	b;

	i = 1;
	while (i < contador)
	{
		b = 0;
		while (argv[i][b] != '\0')
		{
			write(1, &argv[i][b], 1);
			b++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
