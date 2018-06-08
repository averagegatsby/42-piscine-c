/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 18:51:36 by vilam             #+#    #+#             */
/*   Updated: 2018/06/05 19:00:47 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// displays the alphabet in reverse;
// even letters in Upper;
// odd letters in lower;
// followed by \n;
//

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
	while (a >= 'a' && b >= 'A')
	{
		ft_putchar(a);
		ft_putchar(b);
		a -= 2;
		b -= 2;
	}
	ft_putchar('\n');
}
