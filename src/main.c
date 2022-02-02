/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:03:53 by hmechich          #+#    #+#             */
/*   Updated: 2022/02/02 16:39:41 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

int	main(int ac, char **av, char **env)
{
	int		return_value;
	char	**cmd;

	if (ac != 5)
		return (EXIT_FAILURE);
	cmd = get_cmd(av[1], env);
	return_value = execve(cmd[0], cmd, get_path(env));
	if (return_value == -1)
		perror("execve");
	return (EXIT_SUCCESS);
}
