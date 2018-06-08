/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 21:07:54 by vilam             #+#    #+#             */
/*   Updated: 2018/06/07 22:14:22 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write a program that takes a string
// 		 e.g. (char *str) or (int argc, char **argv)
// display its last word, \n
//		if (argc != 2) or there are no words, \n


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
		while (argv[1][i] != '\0')
		{
			i++;
		}
		while (argv[1][i] == 
	}


int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}


int i;
int start;
int end;

		while (str[i] == ' ' || str[i] == '\t' || i >= 0)
		{
			i--;
		}

		while (str[i] != ' ' || str[i] != '\t' || i >= 0)

		i--;
		
