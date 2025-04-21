/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:54:22 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/05 17:07:19 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_destino;
	unsigned int	size_src;

	size_src = ft_len(src);
	if (size == 0)
		return (size_src);
	size_destino = ft_len(dest);
	if (size <= size_destino)
		return (size + size_src);
	i = 0;
	while (src[i] != '\0' && (size_destino + i) < (size - 1))
	{
		dest[size_destino + i] = src[i];
		i++;
	}
	dest[size_destino + i] = '\0';
	return (size_destino + size_src);
}

/*int main()
{
	char	src[50] = " world";
	char	dest[1] = "a";
	char	src2[50] = " world";
	char	dest2[1] = "a";
	int	retorno, retorno2;

	retorno = ft_strlcat(dest, src, 1);
	printf("%s\n", dest);
	printf("%d\n", retorno);
	
	retorno2 = strlcat(dest2, src2, 1);
	printf("%s\n", dest2);
	printf("%d\n", retorno2);
	return (0);
}*/
