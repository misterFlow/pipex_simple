/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:56:38 by hmechich          #+#    #+#             */
/*   Updated: 2022/02/11 01:41:09 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

int	error_calling_pipex(void)
{
	ft_putstr_fd("Usage:\n./pipex file1 cmd1 cmd2 file2\n", 2);
	return (EXIT_FAILURE);
}

int	error_infile(char const *filename)
{
	ft_putstr_fd("error: no such file or directory: ", 2);
	ft_putstr_fd((char *)filename, 2);
	ft_putstr_fd("\n", 2);
	return (EXIT_FAILURE);
}
