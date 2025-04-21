/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:51:35 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/10 10:56:55 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultado;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	resultado = 1;
	while (power > 0)
	{
		resultado *= nb;
		power--;
	}
	return (resultado);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(10, -1)); // 0
	printf("%d\n", ft_iterative_power(5, -2)); // 0
	printf("%d\n", ft_iterative_power(0, -3)); // 0
	printf("%d\n", ft_iterative_power(0, 0)); // 1
	printf("%d\n", ft_iterative_power(0, 3)); // 0
	printf("%d\n", ft_iterative_power(1, 50)); // 1
	printf("%d\n", ft_iterative_power(10, 4)); // 10000
	printf("%d\n", ft_iterative_power(2, 8)); // 256
	return(0);
}*/
