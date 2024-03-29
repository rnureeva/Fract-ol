/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnureeva <rnureeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:18:51 by rnureeva          #+#    #+#             */
/*   Updated: 2019/07/23 17:19:34 by rnureeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	char	*res;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (len + 1));
	if (s3 == NULL)
		return (NULL);
	res = s3;
	while (*s1)
	{
		*s3 = *s1;
		s3++;
		s1++;
	}
	while (*s2)
	{
		*s3 = *s2;
		s3++;
		s2++;
	}
	*s3 = '\0';
	return (res);
}
