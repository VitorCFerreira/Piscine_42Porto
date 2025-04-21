/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:38:40 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/11 15:13:30 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*r;
	int	size;
	int	n;

	if (min >= max)
		return (NULL);
	n = min;
	size = max - min;
	r = (int *) malloc(size * sizeof(int));
	if (!(r))
		return (NULL);
	i = 0;
	while (n < max)
	{
		r[i] = n;
		i++;
		n++;
	}
	return (r);
}

/*#include <stdio.h>
int	main(void)
{
	int	i = 0, min = -1, max = 10, size;
	int	*array;

	size = max - min;
	array = ft_range(min, max);
	while (i < size)
	{
		if (i == size - 1)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
	return (0);
}*/
