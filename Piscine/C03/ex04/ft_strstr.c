/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 05:42:59 by rbouizer          #+#    #+#             */
/*   Updated: 2023/09/24 18:08:41 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    char x[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
    char y[] = "";

    printf("%s", ft_strstr(x, y));
    return 0;
}*/
