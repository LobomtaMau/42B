#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int         ft_atoi(char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t	    ft_strlen(const char *str);
size_t      ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	    ft_strlcpy(char *dest, const char *src, size_t dstsize);
char        *ft_strcat(char *dest, const char *src);
char        *ft_strchr(const char *s, int c);
char        *ft_strcpy(char *dest, const char *src);
void        ft_bzero(void *s, size_t n);

#endif