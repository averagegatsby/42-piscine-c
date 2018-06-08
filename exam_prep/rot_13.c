/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:59:10 by vilam             #+#    #+#             */
/*   Updated: 2018/06/07 17:33:08 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write a program that takes a string and displays it,
// 		(char *str)
// replacing each of its letters by the letter 13 spaces ahead in alphabetical order
// 		str[i] + 13 @ [A - M]
// 		str[i] - 13 @ [N - Z]
// 		str[i] + 13 @ [a - m]
// 		str[i] - 13 @ [n - z]
// 		str[i] @ [all other characters/symbols]

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rot_13(char *str)
{
		int i;

		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'M')
			{
				ft_putchar(str[i] + 13);
			}
			else if (str[i] >= 'N' && str[i] <= 'Z')
			{
				ft_putchar(str[i] - 13);
			}
			else if (str[i] >= 'a' && str[i] <= 'm')
			{
				ft_putchar(str[i] + 13);
			}
			else if (str[i] >= 'n' && str[i] <= 'z')
			{
				ft_putchar(str[i] - 13);
			}
			else
			{
				ft_putchar(str[i]);
			}
			i++;
		}
		ft_putchar('\n');
		return (*str);
}


int		main(int argc, char **argv)
{
 		if (argc == 2)
 		{
 			ft_rot_13(argv[1]);
		}
 		if (argc != 2)
 		{
 			ft_putchar('\n');
		}
		return(0);
}
