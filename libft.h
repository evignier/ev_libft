#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalpha(int);
int	ft_isdigit(int);
int	ft_isalnum(int);
int	ft_isascii(int);
int	ft_isprint(int);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
int	ft_strlen(char const *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif
