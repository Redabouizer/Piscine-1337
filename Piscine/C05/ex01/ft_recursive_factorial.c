/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:55:19 by rbouizer          #+#    #+#             */
/*   Updated: 2023/09/28 13:03:31 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	while (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	if (nb < 0)
	{
		return (0);
	}
	return (1);
}
