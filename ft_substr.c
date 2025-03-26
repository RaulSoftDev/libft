/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:14:25 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 11:16:27 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;

	if (!s)
		return ((void *)0);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return ((void *)0);
	ft_strlcpy(out, s + start, len + 1);
	return (out);
}
