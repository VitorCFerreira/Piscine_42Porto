/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:10:58 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/03 14:16:23 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

/*#include <stdio.h>
int main() 
{
	int res4 = ft_strncmp("hello", "hello", 4);
	int res5 = ft_strncmp("hello", "hell", 4);
	int res6 = ft_strncmp("hello", "world", 3);

	printf("strncmp(\"hello\", \"hello\", 4) = %d\n", res4); // 0
	printf("strncmp(\"hello\", \"hell\", 4) = %d\n", res5);  // 0
	printf("strncmp(\"hello\", \"world\", 3) = %d\n", res6); // h - w

	return (0);
}*/
