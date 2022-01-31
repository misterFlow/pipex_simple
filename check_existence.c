/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_existence.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:04:50 by hmechich          #+#    #+#             */
/*   Updated: 2022/01/31 18:05:30 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	check_existence(char *filename)
{
	if (access(filename, F_OK) == 0)
		return (1);
	else
		return (0);
}
