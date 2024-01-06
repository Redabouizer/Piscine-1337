/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:30:02 by rbouizer          #+#    #+#             */
/*   Updated: 2023/09/24 18:26:08 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	total_len;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	total_len = dlen + slen;
	if (size <= dlen)
	{
		return (size + slen);
	}
	while (dlen + i < size - 1 && src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (total_len);
}
/*
int main() {
    char x[12] = "Hello";
    char y[] = "World";

    printf("%u\n", ft_strlcat(x, y, 10));
    printf("%s\n", x);
    
    return 0;
}*/
