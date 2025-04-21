/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:04:55 by vda-cost          #+#    #+#             */
/*   Updated: 2025/02/27 09:52:02 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	aa;
	int	bb;

	aa = *a;
	bb = *b;
	*a = bb;
	*b = aa;
}

/*int	main(void)
{
	int	a, b;
	char	A, B;
	
	a = 5;
	b = 1;

	ft_swap(&a, &b);
	
	A = '0' + a;
	B = '0' + b;
	write(1, &A, 1);
	write(1, &B, 1);
}*/
