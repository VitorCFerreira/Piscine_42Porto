/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:53:08 by vda-cost          #+#    #+#             */
/*   Updated: 2025/02/27 10:40:44 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#define MAX 500

void	ft_rev_int_tab(int *tab, int size)
{
	int	index1;
	int	index2;
	int	array[MAX];

	index1 = (size - 1);
	index2 = 0;
	while (index2 < size)
	{
		array[index2] = tab[index1];
		index1--;
		index2++;
	}
	index1 = 0;
	while (index1 < size)
	{
		tab[index1] = array[index1];
		index1++;
	}
}

/*int	main(void)
{
	int	array[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
			 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int	size = 20;
	int	i;
	
	i = 0;
	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(array, size);
	i = 0;
	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}*/
