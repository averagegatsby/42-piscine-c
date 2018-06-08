/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:14:07 by vilam             #+#    #+#             */
/*   Updated: 2018/06/06 17:39:10 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// function that returns the length of a string.
//
//

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

// Don't submit anything below; only for testing //

#include <stdio.h>

int	main(void)
{
	char str[] = "Victor is fucking awesome!";

	printf("%d\n", ft_strlen(str));
	return(0);
}
