/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:14:53 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/27 19:49:31 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//LIBC functions
int    ft_isalpha(int c);
int    ft_isdigit(int c);
int    ft_isalnum(int c);
int    ft_isascii(int c);
int    ft_isprint(int c);
size_t    ft_strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int    ft_toupper(int c);
int    ft_tolower(int c);
char *ft_strchr(const char *s, int c);

#endif