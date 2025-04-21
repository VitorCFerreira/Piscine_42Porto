/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:36:01 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/09 15:42:27 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

/*#include <stdio.h>
int main() { 
printf("%d\n", ft_iterative_factorial(-50));
printf("%d\n", ft_iterative_factorial(-1));
printf("%d\n", ft_iterative_factorial(0));
printf("%d\n", ft_iterative_factorial(1));
printf("%d\n", ft_iterative_factorial(2));
printf("%d\n", ft_iterative_factorial(3));
printf("%d\n", ft_iterative_factorial(4));
printf("%d\n", ft_iterative_factorial(5));
printf("%d\n", ft_iterative_factorial(6));
return (0);
}*/
