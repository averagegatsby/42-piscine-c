/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:59:54 by vilam             #+#    #+#             */
/*   Updated: 2018/06/07 14:10:22 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that takes a string;
// displays it; (ft_putchar);
// repeating each alphabetical character as many times as its alphabetical index;
// '\n';

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_repeat_alpha(char *str)
{
	int i;		// declare variables;  			// i is the variable, index-element, that represents which character of a string to print!
	int j;										// j is the variable that says how many times (str[i]) should print!

	i = 0;		// initialize variables;
	j = 0;
	while (str[i] != '\0')		// set a stopping condition for loops;
	{
		if (str[i] >= 'A' && str[i] <= 'Z')		// if this,
		{
			j = str[i] - 65;					// then that.
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')	// if this,
		{
			j = str[i] - 97;						// then that. 
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
	return(*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_repeat_alpha(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return(0);
}
