/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:41:45 by vilam             #+#    #+#             */
/*   Updated: 2018/06/06 16:32:37 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//program that takes a string and displays the first 'a' it encounters. '\n'.
//	if there are no 'a' characters, then '\n'.
//	if argc != 2, then 'a', '\n'.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar(str[i]);
			return(0);
		}
		else
		{
			i++;
		}	
		return(0);
	}
}
int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_aff_a(argv[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return(0);
}
