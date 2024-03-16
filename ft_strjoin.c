/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:58:31 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/31 20:16:02 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*empty(void)
{
	char	*s;

	s = (char *)malloc(1);
	s[0] = '\0';
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (size == 0)
		return (empty());
	else
		s = (char *)malloc(sizeof(char) * sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < (size - 1))
			s[k++] = sep[j++];
		i++;
	}
	s[k] = '\0';
	return (s);
}
/*
int	main(void)
{
	char	*arr_str[3];

	arr_str[0] = "Good";
	arr_str[1] = "morning";
	arr_str[2] = "Vietnam";
	printf("%s\n", ft_strjoin(3, arr_str, "++"));
	return (0);
}*/
