/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:55:45 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/13 15:07:58 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		g_i;
int		g_j;
int		g_b;
int		g_total_size;
char	*g_ret;

int	str_size(char *str)
{
	int	g;

	g = 0;
	while (str[g] != '\0')
		g++;
	return (g);
}

void	aux1(int size, char **strs, char *sep)
{
	while (g_b < size)
	{
		g_total_size += str_size(strs[g_b]);
		g_total_size += str_size(sep);
		g_b++;
	}
	g_total_size -= str_size(sep);
	g_ret = malloc(g_total_size + 1);
	g_ret[0] = '\0';
}

void	aux2(int size, char **strs, char *sep)
{
	while (g_i < size)
	{
		g_b = 0;
		while (g_b < str_size(strs[g_i]))
		{
			g_ret[g_j] = strs[g_i][g_b];
			g_j++;
			g_b++;
		}
		g_b = 0;
		while (sep[g_b] != '\0' && g_i < size - 1)
		{
			g_ret[g_j] = sep[g_b];
			g_j++;
			g_b++;
		}
		g_i++;
	}
	g_ret[g_j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	if (size == 0)
	{
		g_ret = malloc(sizeof(char));
		g_ret[0] = '\0';
		return (g_ret);
	}
	g_total_size = 0;
	g_b = 0;
	aux1(size, strs, sep);
	g_i = 0;
	g_j = 0;
	aux2(size, strs, sep);
	return (g_ret);
}

/*#include <stdio.h>
int	main(void)
{
	char *str[] = {"abc", "def", "ghi", "jkl"};
	printf("%s\n", ft_strjoin(4, str, "---"));
	return (0);
}*/
