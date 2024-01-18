/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-mat <gade-mat@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:40:01 by gade-mat          #+#    #+#             */
/*   Updated: 2024/01/18 16:33:16 by gade-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	    ft_isalpha(int i);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  ft_strlen(const char *str);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t  ft_strlcpy (char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int     ft_toupper(int c);
int     ft_tolower(int i);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, char *s2, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int     ft_atoi(const char *str);
void    *ft_calloc(size_t c, size_t b);
char	*ft_strdup(const char *s1);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);

#endif