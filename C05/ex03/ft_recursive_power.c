/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:08 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/10 11:18:50 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
2^4:
(2 * ft(2, 3))
(2 * 2 * ft(2, 2))
(2 * 2 * 2 * ft(2, 1))
(2 * 2 * 2 * 2 * ft(2, 0))
(2 * 2 * 2 * 2 * 1)
*/
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(10, -1)); // 0
	printf("%d\n", ft_recursive_power(5, -2)); // 0
	printf("%d\n", ft_recursive_power(0, -3)); // 0
	printf("%d\n", ft_recursive_power(0, 0)); // 1
	printf("%d\n", ft_recursive_power(0, 3)); // 0
	printf("%d\n", ft_recursive_power(1, 50)); // 1
	printf("%d\n", ft_recursive_power(10, 4)); // 10000
	printf("%d\n", ft_recursive_power(2, 8)); // 256
	return(0);
}*/
