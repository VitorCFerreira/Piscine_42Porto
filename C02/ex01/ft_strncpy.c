/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:13:51 by vda-cost          #+#    #+#             */
/*   Updated: 2025/02/27 15:30:04 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	v[100] = "vitorvitor";
	char	copy[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaa";

	ft_strncpy(copy, v, 5);

	printf("%s\n", copy);
	return (0);
}*/
