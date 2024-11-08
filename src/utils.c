/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:22:34 by oprosvir          #+#    #+#             */
/*   Updated: 2024/11/03 21:20:36 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	welcome_message(void)
{
	ft_putstr_fd(" __  __ _       _     _          _ _ \n", 1);
	ft_putstr_fd("|  \\/  (_)_ __ (_)___| |__   ___| | |\n", 1);
	ft_putstr_fd("| |\\/| | | '_ \\| / __| '_ \\ / _ \\ | |\n", 1);
	ft_putstr_fd("| |  | | | | | | \\__ \\ | | |  __/ | |\n", 1);
	ft_putstr_fd("|_|  |_|_|_| |_|_|___/_| |_|\\___|_|_|\n", 1);
	ft_putstr_fd("\n", 1);
}

bool	is_empty_line(const char *line)
{
	while (*line)
	{
		if (!ft_isspace(*line))
			return (false);
		line++;
	}
	return (true);
}
