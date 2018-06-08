/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 20:07:11 by vilam             #+#    #+#             */
/*   Updated: 2018/06/06 20:12:09 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// function that displays all digits in ascending order!
// 	
// 		c = '0';
// 		while (c < '9')
// 			ft_putchar(c)
// 			i++

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	char c;
	
	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
	return(0);
}
