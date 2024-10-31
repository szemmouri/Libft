/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:36:44 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/31 19:55:49 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (s && *s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*fill_word(const char *start, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!word)
		return (NULL);
	while (i < len)
		word[i++] = *start++;
	word[i] = '\0';
	return (word);
}

static void	ft_free(char **words)
{
	int	i;

	i = 0;
	if (!words)
		return ;
	while (words[i])
		free(words[i++]);
	free(words);
}

static size_t	word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**process_words(char **words, const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = word_len(s, c);
			words[i] = fill_word(s, len);
			if (!words[i])
			{
				ft_free(words);
				return (NULL);
			}
			i++;
			s += len;
		}
	}
	words[i] = NULL;
	return (words);
}

char	**ft_split(const char *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!words)
		return (NULL);
	return (process_words(words, s, c));
}

// int	main(void)
// {
// 	int i = 0;
// 	char **result = ft_split("hello*world*program", '*');
// 	while (result[i])
// 		printf("%s\n", result[i++]);
// 	ft_free(result);
// }