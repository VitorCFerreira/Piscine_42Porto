/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:47:47 by vda-cost          #+#    #+#             */
/*   Updated: 2025/02/23 19:01:15 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;

	if (n >= 0)
	{
		a = 'P';
	}
	else
	{
		a = 'N';
	}
	write(1, &a, 1);
}
