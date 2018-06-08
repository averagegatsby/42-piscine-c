/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:07:05 by vilam             #+#    #+#             */
/*   Updated: 2018/06/06 17:12:34 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write a program that displays the alphabet in reverse,
// 	with even letters in uppercase,
// 	and odd letters in lowercase, 
// 	\n


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char a; 
	char b;

	a = 'z';
	b = 'Y';
	while ( a >= 'a' && b >= 'A')
	{
		ft_putchar(a);
		ft_putchar(b);
		a -= 2;
		b -= 2;
	}
	ft_putchar('\n');
	return(0);
}
