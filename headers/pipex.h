/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:30:20 by hmechich          #+#    #+#             */
/*   Updated: 2022/02/11 17:25:57 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/wait.h>
# include <stdio.h>
# include <string.h>
# include "../libft/libft.h"
# include "../libft/ft_printf.h"

# define COMMAND_NOT_FOUND 127

void	pipex(int infile, int outfile, char **av, char **env);
int		check_existence(char *filename);
char	**get_path(char **env);
char	**get_cmd(char const *arg_cmd, char **env);
int		error_calling_pipex(void);
int		error_infile(char const *filename);
int		child_1_process(int infile, char **cmd1, int *end);
int		child_2_process(int outfile, char **cmd2, int *end);

#endif
