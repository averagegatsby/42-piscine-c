/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 19:49:08 by vilam             #+#    #+#             */
/*   Updated: 2018/06/04 22:50:42 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int len;
	
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	printf("%d\n", len);
	return(len);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc >= 2)
	{
		ft_strlen(argv[1]);
	}
		return(0);
}
