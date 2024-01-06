/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:50:51 by rbouizer          #+#    #+#             */
/*   Updated: 2023/10/01 20:13:58 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (tab == 0)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
