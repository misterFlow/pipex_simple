/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:03:53 by hmechich          #+#    #+#             */
/*   Updated: 2022/02/11 17:32:44 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

int	main(int ac, char **av, char **env)
{
	int	infile;
	int	outfile;

	if (ac != 5)
		return (error_calling_pipex());
	if (!check_existence(av[1]))
		return (error_infile(av[1]));
	infile = open(av[1], O_RDONLY);
	outfile = open(av[4], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (infile < 0 || outfile < 0)
		return (EXIT_FAILURE);
	pipex(infile, outfile, av, env);
	return (EXIT_SUCCESS);
}
