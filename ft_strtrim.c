/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadrien <iadrien@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:13:03 by iadrien           #+#    #+#             */
/*   Updated: 2020/05/23 21:46:09 by iadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	int		it;

	if (s1 == (void*)0 || set == (void*)0)
		return ((void*)0);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	if (*s1 == '\0')
		return (ft_calloc(1, 1));
	it = ft_strlen(s1) - 1;
	while (it >= 0 && ft_strchr(set, s1[it]))
		it--;
	return (ft_substr(s1, 0, it + 1));
}
