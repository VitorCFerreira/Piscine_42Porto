/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:51:45 by vda-cost          #+#    #+#             */
/*   Updated: 2025/02/25 14:44:11 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int a = 15, b = 2;
	ft_ultimate_div_mod(&a, &b);
	
	char A, B;
	A = '0' + a;
	B = '0' + b;
	write(1, &A, 1);
	write(1, &B, 1);
	return (0);
}*/
