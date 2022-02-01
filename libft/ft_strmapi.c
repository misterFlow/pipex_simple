/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 07:51:25 by hmechich          #+#    #+#             */
/*   Updated: 2021/11/29 12:08:51 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		new_string = malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (new_string == NULL)
			return (NULL);
		while (i < ft_strlen(s))
		{
			new_string[i] = f((unsigned int)i, s[i]);
			i++;
		}
		new_string[i] = 0;
		return (new_string);
	}
	return (NULL);
}
