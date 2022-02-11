/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:03:53 by hmechich          #+#    #+#             */
/*   Updated: 2022/02/11 01:38:56 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

int	main(int ac, char **av, char **env)
{
	int		return_value;
	int		infile;
	char	**cmd;

	if (ac != 5)
		return (error_calling_pipex());
	infile = check_existence(av[1]);
	if (!infile)
		return (error_infile(av[1]));
	cmd = get_cmd(av[2], env);
	return_value = execve(cmd[0], cmd, get_path(env));
	if (return_value == -1)
		perror("execve");
	return (EXIT_SUCCESS);
}
