/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 16:21:02 by vilam             #+#    #+#             */
/*   Updated: 2018/05/20 17:29:57 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_top_bottom(int number_column)
{
	ft_putchar('A');
	
	int b;												/*introducing the variable 'b' of integer type*/
	b = 0;
	while (b < (number_column - 2)) 					/* Q: could we have also used 'while (b < 3)'?*/
	{
		ft_putchar('B');
		b++;
	}
	
	if (number_column > 1)
		ft_putchar('C');

	ft_putchar('\n');
}

void	print_middle(int number_column)					/* Q: why do we ask this function to return void? */
{
	ft_putchar('B');
	
	int space;											/*introducing the variable 'space' of type, integer*/
	space = 0;
	while (space < (number_column - 2)
	{
		ft_putchar(' ');
		space++;
	}

	if (number_column > 1)
		ft_putchar('B');

	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)						/* as long as 'x' and 'y' are positive, allow f(x) to run.*/
	{										/* and execute the following code */
		print_top_bottom(x);

		int 	current_row;				/*introducing the variable 'current_row' of type, integer*/
		current_row = 0;					/*set current_row equal to 0*/
		while (current_row < (y - 2))		/* if ___ is true, execute the following function...	*/
		{
			print_middle(x);
			curr_row++;
		}
		
		if (y > 1)
			print_top_bottom(x)
	}
}
