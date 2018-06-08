/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   age.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 12:15:37 by vilam             #+#    #+#             */
/*   Updated: 2018/05/20 12:23:41 by vilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int main()
{
	int age;

	printf("Please enter your age:\n") ;
	scanf("%d", &age) ;
	if (age < 100) {
		printf("You are pretty young!\n") ;
	}
	else if (age == 100) {
		printf("You are a century old!\n") ;
	}
	else {
		printf("You are quite experienced!\n") ;
	}
	return 0;
}
