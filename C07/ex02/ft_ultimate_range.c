/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vda-cost <vda-cost@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:29:40 by vda-cost          #+#    #+#             */
/*   Updated: 2025/03/11 15:53:54 by vda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = malloc((max - min) * sizeof(int));
	i = 0;
	if (ptr == NULL)
		return (-1);
	while (i < (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (max - min);
}

/*#include <stdio.h>
int main(void)
{
    int *range;
    int min = 5;
    int max = 10;
    int size;
    int i;
    
    size = ft_ultimate_range(&range, min, max);
    
    if (size == -1)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }
    else if (size == 0)
    {
        printf("Invalid range: min >= max.\n");
        return (0);
    }
    
    printf("Generated range: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");
    
    free(range);
    return (0);
}*/
