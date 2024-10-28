/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:57:19 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/27 16:02:31 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char *tmp;
    size_t i;

    tmp = (char *)s;
    i = 0;
    while(i < n)
    {
        tmp[i] = 0;
        i++;
    }
}

// int main()
// {
//     char str[10] = "Hello";
//     printf("before: %s\n", str);
//     ft_bzero(str, 5);
//     printf("after: %s\n", str);
// }