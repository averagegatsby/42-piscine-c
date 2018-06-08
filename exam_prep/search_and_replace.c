/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 18:14:10 by vilam             #+#    #+#             */
/*   Updated: 2018/06/07 19:42:28 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write a program that takes 3 arguments (argc = 4)
// 		./a.out "stringstringstring" "i" "o"
// 		- the second argument will be replaced by the third argument.
//
// 		if (argc != 4), ft_putchar('\n')

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_search_and_replace(char *str, char *a, char *b)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == *a)
		{
			ft_putchar(*b);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	return(0);
}


int		main(int argc, char **argv)
{
	if (argc == 4 && argv[3][1] == '\0')
	{
		ft_search_and_replace(argv[1], argv[2], argv[3]);
		ft_putchar('\n');
	}
	else 
	{
		ft_putchar('\n');
	}
}
