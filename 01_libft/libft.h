/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struf <struf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:08:09 by lobomau           #+#    #+#             */
/*   Updated: 2023/03/12 14:52:28 by struf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
void    ft_putchar_fd(char c, int fd);
void    ft_putnr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_strclr(char *s);
void	ft_strdel(char **as);
int     ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);
size_t  ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strchr(const char *s, int c);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif