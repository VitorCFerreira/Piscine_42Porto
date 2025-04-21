/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:46:29 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/10 13:51:48 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (1)
	{
		if (i * i == nb)
			return (i);
		else if (i * i == 2147395600)
			return (0);
		i++;
	}
}

/*#include <stdio.h>
int main(void)
{
	int i = 0;
	while (i < 82)
	{
		printf("SQRT(%d) = %d\n", i, ft_sqrt(i));
		i++;
	}
	i = 900;
	while (i < 950)
	{
		printf("SQRT(%d) = %d\n", i, ft_sqrt(i));
		i++;
	}
	return (0);
}*/
