#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>


int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);
unsigned int	ft_strlen(char *str);
void		*ft_memset(void *s, int c, unsigned int n);
void		ft_bzero(void *s, unsigned int n);
void		*ft_memcpy(void *dest, const void *src, unsigned int n);
void		*ft_memmove(void *dest, const void *src, unsigned int n);
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size);
char		ft_toupper(char c);
char		ft_tolower(char c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void		*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
char		*ft_strnstr(const char *big, const char *little, unsigned int len);
int		ft_atoi(char *str);
void		*ft_calloc(unsigned int count, unsigned int size);
char		*ft_strdup(const char *s);

#endif
