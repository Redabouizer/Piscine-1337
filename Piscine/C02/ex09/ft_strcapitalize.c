/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:26:24 by rbouizer          #+#    #+#             */
/*   Updated: 2023/09/20 02:10:50 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int t;
	
	i = 0;
	t = 0;
	while (str[i])
	{
		if ((str[i] <= '0' && str[i] >= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			t++;
		else 
			t = 0;
		if (t == 1 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (t == 1 && (str[i] <= '0' && str[i] >= '9')
			t++;
		else if (t > 1 && (str[i] >= 'A' && str[i] <='Z'))
			str += 32;
		i++;
	}
	return (str);
}
