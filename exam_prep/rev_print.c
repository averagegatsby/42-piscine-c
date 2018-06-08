/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 14:48:03 by vilam             #+#    #+#             */
/*   Updated: 2018/06/07 15:46:03 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// write a program that takes a string;
// displays the string in reverse;
// '\n';
//		if (argc != 1); '\n'

int		main(int argc, char **argv)
{
	int i;

	i = 0;

											// while the index-element != (null), 
											// increase to the end of the string,
	if (argc == 2)
	{
		while (argv[1][i] != '\0') 
		{
			i++;
		}
		while (i >= 0)						// while i >= 0,
		{									// print from the end of the string, argv[1][i]
			ft_putchar(argv[1][i]);			// decrease i by one until we reach the beginning of the string.
			i--;
		}
	}
	ft_putchar('\n');
	return(0);
}
