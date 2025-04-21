/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:23:28 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/10 16:09:31 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size_src;
	int		i;
	char	*dup;

	size_src = 0;
	while (src[size_src] != '\0')
		size_src++;
	dup = (char *) malloc(size_src + 1);
	if (!(dup))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*dup;
	if (argc > 1)
	{
		dup = ft_strdup(argv[1]);
		printf("%s\n", dup);
	}
	return (0);
}*/
