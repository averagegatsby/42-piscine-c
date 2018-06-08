/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:56:40 by vilam             #+#    #+#             */
/*   Updated: 2018/06/06 17:04:26 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// program that displays the alphabet, 
// 	with even letters in uppercase, 
// 	and odd letters in lowercase, 
// 	\n.
//

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	char a;
	char b;

	a = 'a';
	b = 'B';
	while (a <= 'z' && b <= 'Z')
	{
		ft_putchar(a);
		ft_putchar(b);
		a += 2;
		b += 2;
	}
	ft_putchar('\n');
	return(0);
}
