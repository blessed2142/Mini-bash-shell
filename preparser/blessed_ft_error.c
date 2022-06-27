/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blessed_ft_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdominqu <sdominqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:49:25 by rphoebe           #+#    #+#             */
/*   Updated: 2021/10/19 20:36:53 by sdominqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	allocation_error(void)
{
	printf("Memory allocation error\n");
	exit (0);
}

int	ft_error1(int code, t_data *data)
{
	if (code == 4)
	{
		printf("Minishell: syntax error near unexpected token `<'\n");
		data->code_exit = 258;
		return (1);
	}
	else if (code == 5)
	{
		printf("Minishell: syntax error near unexpected token `newline'\n");
		data->code_exit = 258;
		return (1);
	}
	else if (code == 6)
	{
		printf("Minishell: syntax error near unexpected token `>'\n");
		data->code_exit = 258;
		return (1);
	}
	return (0);
}

int	ft_error(int code, t_data *data)
{
	if (code == 1)
	{
		printf("Minishell: error: unclosed quotes detected\n");
		return (1);
	}
	else if (code == 2)
	{
		printf("Minishell: syntax error near unexpected token `|'\n");
		data->code_exit = 258;
		return (1);
	}
	else if (code == 3)
	{
		printf("Minishell: error: unclosed pipe detected\n");
		return (1);
	}
	else if (code == 6 || code == 5 || code == 4)
		return (ft_error1(code, data));
	else if (code == 8)
		return (allocation_error());
	return (0);
}
