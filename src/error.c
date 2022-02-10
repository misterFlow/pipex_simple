/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:56:38 by hmechich          #+#    #+#             */
/*   Updated: 2022/02/11 00:01:21 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

int	error_calling_pipex(void)
{
	ft_putstr_fd("Usage:\n./pipex file1 cmd1 cmd2 file2\n", 2);
	return (EXIT_FAILURE);
}
