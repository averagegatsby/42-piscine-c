/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:37:17 by vilam             #+#    #+#             */
/*   Updated: 2018/06/07 13:24:38 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that takes strings as arguments, displays last argument,(argv[argc - 1]), 
// \n.
// argc is the count of total arguments. argc starts counting at 0. however, argv starts counting at 0. Thus, [argc - 1] = the last argument. 
// 	- if argc < 1, '\n'

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_last_param(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return(0);
}

int		main(int argc, char **argv)
{
	if (argc < 1)
	{
		ft_putchar('\n');
	}
	if (argc >= 1)
	{
		ft_aff_last_param(argv[argc - 1]);
		ft_putchar('\n');
	}
	return(0);
}
	
