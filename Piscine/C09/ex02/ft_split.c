/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 00:38:10 by rbouizer          #+#    #+#             */
/*   Updated: 2023/10/06 00:41:14 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	copying(char *str, int start, int end, char *dest)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		dest[i] = str[start];
		i++;
		start++;
	}
	dest[i] = '\0';
}

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	is_present(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i + 1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (str_len(str) == 0)
		return (0);
	if (str_len(charset) == 0)
		return (1);
	while (str[i])
	{
		if (!(is_present(charset, str[i])))
		{
			while (!(is_present(charset, str[i])) && str[i])
			{
				i++;
			}
			count++;
		}
		if (str[i])
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**spliten;
	int		n;
	int		start;
	int		end;
	int		i;

	i = 0;
	n = count_strings(str, charset);
	spliten = (char **) malloc ((n + 1) * sizeof(char *));
	start = 0;
	while (n)
	{
		while (is_present(charset, str[start]))
			start++;
		end = start;
		while (!is_present(charset, str[end]) && str[end])
			end++;
		spliten[i] = (char *) malloc((end - start + 1) * sizeof(char));
		copying(str, start, end - 1, spliten[i]);
		start = end;
		i++;
		n--;
	}
	spliten[i] = NULL;
	return (spliten);
}
