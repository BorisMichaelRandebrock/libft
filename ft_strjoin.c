/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:27:06 by brandebr          #+#    #+#             */
/*   Updated: 2024/01/29 13:29:26 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*willy;

	i = 0;
	j = 0;
	willy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!willy)
		return (NULL);
	while (s1[i])
	{
		willy[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		willy[i] = s2[j];
		i++;
		j++;
	}
	willy[i] = '\0';
	return (willy);
}
/*
int	main(void)
{
	char    str[] = "supercalifragil";
	char    str2[] = "isticoespialidoso";
	char	*result;

	result = ft_strjoin(str, str2);
	puts(result);
	printf("\n%s", result);
	return (0);
}*/
