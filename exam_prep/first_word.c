/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:44:04 by vilam             #+#    #+#             */
/*   Updated: 2018/06/06 20:06:42 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write a program that takes a string,
// displays its first word,
// '\n'
//		- word (def.) : "section of string separated by " ", "\t", "\0"
//		- if (argc != 2 || no words), simply display a newline, \n.
//

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}
