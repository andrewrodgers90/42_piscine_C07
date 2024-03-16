/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:22:24 by arodgers          #+#    #+#             */
/*   Updated: 2023/08/01 10:56:14 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*new;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	new = (int *)malloc((sizeof(int)) * (max - min));
	if (!new)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		new[i] = min;
		i++;
		min++;
	}
	*range = new;
	return (i);
}
/*
int	main(void)
{
	int	int_return;
	int	*int_array = NULL;

	int_return = ft_ultimate_range(&int_array, 7, -8);
	printf("%d\t", int_return);
	return (0);
}*/
