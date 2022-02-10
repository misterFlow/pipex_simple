/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:21:15 by hmechich          #+#    #+#             */
/*   Updated: 2022/02/11 00:36:14 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

static int	get_cmd_path(char **cmd, char **env)
{
	int				i;
	char			**path;
	char			*tmp;

	if (check_existence(*cmd))
		return (1);
	path = get_path(env);
	if (path == NULL)
		return (0);
	i = 0;
	while (path[i])
	{
		tmp = ft_strjoin(path[i], *cmd);
		if (check_existence(tmp))
		{
			free(*cmd);
			*cmd = tmp;
			return (1);
		}
		free(tmp);
		i++;
	}
	return (COMMAND_NOT_FOUND);
}

char	**get_cmd(char const *arg_cmd, char **env)
{
	char	**cmd;

	cmd = ft_split(arg_cmd, ' ');
	if (cmd == NULL)
		return (NULL);
	if (get_cmd_path(cmd, env) == 0)
	{
		return (NULL);
	}
	return (cmd);
}
