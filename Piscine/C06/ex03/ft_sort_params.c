/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:19:47 by rbouizer          #+#    #+#             */
/*   Updated: 2023/10/01 00:44:54 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_arg(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	k = 0;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			j = i + 1;
			while (j < argc)
			{
				k = ft_strcmp(argv[i], argv[j]);
				if (k > 0)
					ft_swap(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	ft_sort_arg(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
