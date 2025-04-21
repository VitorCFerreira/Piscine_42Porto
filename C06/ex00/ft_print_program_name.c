/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:07:58 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/08 16:37:48 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int contador, char **nome)
{
	int	i;

	i = 0;
	while (nome[0][i] != '\0' && contador)
	{
		write(1, &nome[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
// argv:
// [[./a.out][parametro1][parametro2]]
