/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:21:56 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/10 12:28:49 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
index = 4:
(ft(3) + ft(2))
(ft(2) + ft(1) + ft(1) + ft(0))
(ft(1) + ft(0) + 1 + 1 + 0)
(1 + 0 + 1 + 1 + 0) = 3

index = 5:
(ft(4) + ft(3))
(ft(3) + ft(2) + ft(2) + ft(1))
(ft(2) + ft(1) + ft(1) + ft(0) + ft(1) + ft(0) + 1)
(ft(1) + ft(0) + 1 + 1 + 0 + 1 + 0 + 1)
(1 + 0 + 1 + 1 + 0 + 1 + 0 + 1) = 5
*/

/*#include <stdio.h>
int	main(void)
{
	int i = 0;
	while (i < 30)
	{
		printf("%d\n", ft_fibonacci(i));
		i++;
	}
	return (0);
}*/
