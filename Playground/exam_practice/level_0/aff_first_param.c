/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 14:53:53 by vilam             #+#    #+#             */
/*   Updated: 2018/06/01 15:03:17 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char ft_first_param(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return(*str);
}
	
int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		ft_first_param(argv[1]);
	}
	if (argc < 1)
	{
		ft_putchar('\n');
	}
	return(0);
}
