/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 21:48:46 by vilam             #+#    #+#             */
/*   Updated: 2018/05/23 21:54:55 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
		unsigned char	s1_value;
		unsigned char	s2_value;
		int i;

		i=0;
		while (s1[i] == s2[i] && s1[i] != 0)
			i++;
		s1_value = s1[i];
		s2_value = s2[i];
		return (s1_value - s2_value);
}
