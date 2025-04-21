/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:58:53 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/06 19:26:37 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		c = ((nb % 10) + '0');
		write(1, &c, 1);
	}
}

/*int	main(void)
{
	ft_putnbr(-42758);
	write(1, "\n", 1);
	ft_putnbr(10000000);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	write(1, "erros:", 6);
	write(1, "\n", 1);
	ft_putnbr(0);
}*/
