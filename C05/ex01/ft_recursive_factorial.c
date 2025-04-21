/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:50:07 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/09 16:06:48 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
int main() { 
printf("%d\n", ft_recursive_factorial(-50));
printf("%d\n", ft_recursive_factorial(-1));
printf("%d\n", ft_recursive_factorial(0));
printf("%d\n", ft_recursive_factorial(1));
printf("%d\n", ft_recursive_factorial(2));
printf("%d\n", ft_recursive_factorial(3));
printf("%d\n", ft_recursive_factorial(4));
printf("%d\n", ft_recursive_factorial(5));
printf("%d\n", ft_recursive_factorial(6));
return (0);
}*/
