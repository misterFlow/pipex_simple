/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:03:53 by hmechich          #+#    #+#             */
/*   Updated: 2022/01/31 18:12:51 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int ac, char **av)
{
	if (ac != 5)
		return (EXIT_FAILURE);
	printf("%i\n", check_existence(av[1]));
	return (EXIT_SUCCESS);
}
