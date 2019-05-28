/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:06:36 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/25 16:48:12 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		ft_isalpha(int a);
int		ft_isdigit(int a);
int		ft_isalnum(int a);
int		ft_isascii(int a);
int		ft_isprint(int a);
char	ft_toupper(char a);
char	ft_tolower(char a);
void	ft_putchar(char a);
void	ft_putstr(char const *str);
void	ft_putendl(char const *str);
void	ft_putchar_fd(char a, int fd);
void	ft_putstr_fd(char const *str, int fd);
void	ft_putendl_fd(char const *str, int fd);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *str);
int		ft_isspace(char c);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memalloc(size_t size);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
void	ft_memdel(void **ap);
void	ft_bzero(void *s, size_t n);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

#endif
