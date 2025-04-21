/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:09:45 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/03 15:32:52 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while (to_find[size] != '\0')
		size++;
	if (size == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (j == size - 1)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	h[] = "aahelloaaaaaaaaaaahelloaaaaaaaaaaa";
	char	f[] = "hello";
	char	g[] = "hella";

	printf("%s\n", ft_strstr(h, f));
	printf("%s\n", ft_strstr(h, g));
	printf("%s\n", strstr(h, f));
	printf("%s\n", strstr(h, g));
	return (0);
}*/
