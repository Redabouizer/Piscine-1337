/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:16:34 by rbouizer          #+#    #+#             */
/*   Updated: 2023/09/28 13:00:54 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--; 
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(7));
	return 0;
}
*/
