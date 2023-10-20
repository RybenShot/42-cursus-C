/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:24:04 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/11 17:04:12 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}                       t_list;

int         ft_isalpha(int c);
int         ft_digit(int arg);
int         ft_isalnum( int c);
int         ft_isascii(int c);
int         ft_isprint(int c);
size_t      ft_strlen(const char *s);
void        *ft_memset(void *str, int c, size_t len);
void        ft_bzero(void *str, size_t size);
void        *ft_memcpy(void *dest, const void *src, size_t size);
void        *ft_memmove(void *dest, const void *src, size_t size);
size_t      ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t      ft_strlcat(char *dest, const char *src, size_t size);
int         ft_toupper(int c);
int         ft_lower(int c);
char        *ft_strchr(const char *str, int c);
char        *ft_strrchr(const char *str, int c);
int         ft_strncmp(const char *s1, const char *s2, size_t size);
void        *ft_memcmp(const void *str, int c, size_t size);
char        *ft_strnstr(const char *haystack, const char *needle, size_t len);
int         ft_atoi(const char *str);
void        *ft_calloc(size_t num, size_t size);
char        ft_strdup(const char *str);

char        *ft_substr(char const *s, unsigned int start, size_t len);
char        *ft_strjoin(char const *s1, char const *s2);
char        *ft_strtrim(char const *s1, char const *set);
char        **ft_split(char const *s, char c);
char        *ft_itoa(int n);


#endif