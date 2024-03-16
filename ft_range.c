/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:39:39 by arodgers          #+#    #+#             */
/*   Updated: 2023/08/01 10:37:06 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
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
		return (0);
	}
	i = 0;
	while (min < max)
	{
		new[i] = min;
		i++;
		min++;
	}
	return (new);
}
/*
int	main(void)
{
	int	*int_arr;

	int_arr = ft_range(17, 8);
	for (int i = 0; i < 14; i++)
	{
		printf("%d\t", int_arr[i]);
	}
	return (0);
}*/
