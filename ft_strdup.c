/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:35:26 by arodgers          #+#    #+#             */
/*   Updated: 2023/08/01 10:28:17 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	new = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!new)
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	char	*arr = "Good morning to you";
	char	*arr2 = "Good morning to you";
	
	char	*arr3 = ft_strdup(arr);
	char	*arr4 = strdup(arr2);

	printf("ft_strdup: %s\n", arr3);
	printf("strdup: %s\n", arr4);
	return (0);
}*/
