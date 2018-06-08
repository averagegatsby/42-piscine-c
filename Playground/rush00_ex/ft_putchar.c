/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 16:01:00 by vilam             #+#    #+#             */
/*   Updated: 2018/05/20 16:14:00 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>						/*include the 'unified standard library*/

										/*There will be a function...*/
int		ft_putchar(char c)				/*the function 'ft_putchar' will take*/
										/*the variable 'char c' and return */
										/*the data type of integer*/
{
	write (1, &c, 1);
	return (0);
}
