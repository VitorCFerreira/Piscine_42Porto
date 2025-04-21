/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:38:09 by vda-cost          #+#    #+#             */
/*   Updated: 2025/02/25 13:50:29 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a, b, div, mod;
	a = 14;
	b = 4;
	ft_div_mod(a, b, &div, &mod);

	char DIV, MOD;
	DIV = '0' + div;
	MOD = '0' + mod;
	write(1, &DIV, 1);
	write(1, &MOD, 1);
	return (0);	
}*/
