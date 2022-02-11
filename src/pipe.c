/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:23:30 by hmechich          #+#    #+#             */
/*   Updated: 2022/02/11 17:25:41 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

void	pipex(int infile, int outfile, char **av, char **env)
{
	int		end[2];
	int		status;
	pid_t	child_1;
	pid_t	child_2;

	pipe(end);
	child_1 = fork();
	if (child_1 < 0)
		return (perror("fork"));
	if (!child_1)
		child_1_process(infile, get_cmd(av[2], env), end);
	child_2 = fork();
	if (child_2 < 0)
		return (perror("fork"));
	if (!child_2)
		child_2_process(outfile, get_cmd(av[3], env), end);
	close(end[0]);
	close(end[1]);
	waitpid(child_1, &status, 0);
	waitpid(child_2, &status, 0);
}

int	child_1_process(int infile, char **cmd1, int *end)
{
	int return_value;

	dup2(infile, STDIN_FILENO);
	dup2(end[1], STDOUT_FILENO);
	close(end[0]);
	close(infile);
	return_value = execve(cmd1[0], cmd1, NULL);
	if (return_value == -1)
		perror("execve");
	return (EXIT_FAILURE);
}

int	child_2_process(int outfile, char **cmd2, int *end)
{
	int return_value;

	dup2(outfile, STDOUT_FILENO);
	dup2(end[0], STDIN_FILENO);
	close(end[1]);
	close(outfile);
	return_value = execve(cmd2[0], cmd2, NULL);
	if (return_value == -1)
		perror("execve");
	return (EXIT_FAILURE);
}
