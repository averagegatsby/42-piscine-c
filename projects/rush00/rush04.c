/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:45:00 by vilam             #+#    #+#             */
/*   Updated: 2018/05/20 18:30:53 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_top(int num_col)
{
	ft_putchar('A');
	
	int b;
	b = 0;
	while (b < (num_col - 2))
	{
		ft_putchar('B');
		b++;
	}

	if (num_col > 1)
		ft_putchar('C');

	ft_putchar('\n');
}

void print_middle(int num_col)
{
	ft_putchar('B');

	int space;
	space = 0;
	while (space < (num_col - 2))
	{
		ft_putchar(' ');
		space++;
	}

	if (num_col > 1)
		ft_putchar('B');

	ft_putchar('\n');
}

void print_bottom(int num_col)
{
	ft_putchar('C');

	int b;
	b = 0;
	while (b < (num_col - 2))
	{
		ft_putchar('B');
		b++;
	}

	if (num_col > 1)						
		ft_putchar('A');		

	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_top(x);

		int		curr_row;
		curr_row = 0;
		while (curr_row < (y - 2))
		{
			print_middle(x);
			curr_row++;
		}

		if (y > 1)
			print_bottom(x);
	}
}
