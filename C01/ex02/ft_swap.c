/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:47:31 by ysantos-          #+#    #+#             */
/*   Updated: 2022/01/28 02:07:03 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int x = 5;
	int y = 9;

	printf ("%i / %i\n", x, y);
	ft_swap(&x, &y);
	printf ("%i / %i\n", x, y);
	return (0);
}*/
