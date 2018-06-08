/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:15:27 by vilam             #+#    #+#             */
/*   Updated: 2018/06/06 13:34:12 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// displays the first 'z'. '\n'

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != 'z')
		{
			i++;
		}
		if (argv[1][i] == 'z')
		{
			ft_putchar(argv[1][i]);
			ft_putchar('\n');
		}
	}
	if (argc != 2)
	{
		ft_putchar('z');
		ft_putchar('\n');
	}
return(0);
}


