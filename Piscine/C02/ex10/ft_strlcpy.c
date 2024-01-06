/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:53:57 by rbouizer          #+#    #+#             */
/*   Updated: 2023/09/19 18:18:07 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlen(char *str)
{
    unsigned int counter;

    counter = 0;
    while (*str != '\0')
    {
        counter++;
        str++;
    }
    return (counter);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;

    if (size == 0)
        return (ft_strlen(src));
    i = 0;
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}
