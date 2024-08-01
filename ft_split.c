/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:06:44 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/30 10:23:24 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkword(const char *str, char c)
{
	int	i;
	int	word;
	int	check;

	i = 0;
	word = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] != c && check == 0)
		{
			check = 1;
			word++;
		}
		if (str[i] == c)
			check = 0;
		i++;
	}
	return (word);
}

static char	*alloc_word(const char *str, int *i, char c)
{
	char	*a;
	int		start;
	int		z;

	start = *i;
	while (str[*i] != c && str[*i])
		(*i)++;
	a = malloc (((*i) - start) + 1);
	if (!a)
		return (NULL);
	z = 0;
	while (start < (*i))
	{
		a[z] = str[start];
		start++;
		z++;
	}
	a[z] = '\0';
	return (a);
}

static char	**memfree(char **split, int j)
{
	while (j >= 0)
	{
		free(split[j]);
		j--;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int		i;
	int		j;

	i = 0;
	if (!s)
		return (NULL);
	a = malloc((checkword(s, c) + 1) * sizeof (char *));
	if (!a)
		return (NULL);
	j = 0;
	while (j < checkword(s, c) && s[i])
	{
		if (s[i] != c)
		{
			a[j] = alloc_word(s, &i, c);
			if (a[j] == NULL)
				return (memfree(a, (j - 1)));
			j++;
		}
		i++;
	}
	a[j] = NULL;
	return (a);
}

// int main ()
//  {
// 	char 	*s = "abcbdecrc";
// 	char	**d = ft_split(s, 'c');
// 	int i = 0;
// 	while (i < 3)
// 	{
// 		printf("%s\n", d[i]);
// 		i++;
// 	}
// }