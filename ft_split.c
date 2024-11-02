/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/10/29 12:36:44 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/31 19:55:49 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	*ft_free(char **strs, int count)
{
	while (count > 0)
		free(strs[--count]);
	free(strs);
	return (NULL);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i++] = str[start++];
	}
	word[i] = '\0';
	return (word);
}

static void	ft_initiate_vars(size_t *i, size_t *j, size_t *start)
{
	*i = 0;
	*j = 0;
	*start = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	start;

	ft_initiate_vars(&i, &j, &start);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[j] = fill_word(s, start, i);
		if (!result[j])
			return (ft_free(result, j));
		j++;
	}
	result[j] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char *input = "hello*world*program";
// 	char **result = ft_split(input, '*');

// 	if (result)
// 	{
// 		for (int i = 0; result[i] != NULL; i++)
// 		{
// 			printf("%s\n", result[i]);
// 			free(result[i]);
// 		}
// 		free(result);
// 	}

// 	return (0);
// }