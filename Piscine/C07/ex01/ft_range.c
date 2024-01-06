/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:49:23 by rbouizer          #+#    #+#             */
/*   Updated: 2023/10/01 20:11:10 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	range;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	range = max - min ;
	tab = malloc(range * sizeof(int));
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
