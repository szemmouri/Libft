/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:16:33 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/31 15:38:25 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_istrim(const char c, const char *set);
char	*ft_newstr(int i, int j, const char *s1);

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_istrim(s1[i], set))
		i++;
	while (j > i && ft_istrim(s1[j], set))
		j--;
	return (ft_newstr(i, j, s1));
}

char	*ft_newstr(int start, int end, const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_calloc((end - start + 2), sizeof(char));
	if (!str)
		return (NULL);
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

int	ft_istrim(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// int main()
// {
//     char s1[] = "ababaaaMy name is Simonbbaaabba";
//     char set[] = "ab";

//     printf("%s", ft_strtrim(s1, set));
// }