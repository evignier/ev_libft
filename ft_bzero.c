#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
//
//int	main()
//{
//	char	*str;
//	int	n;
//
//	n = 2;
//	str = (char *)malloc(n * sizeof(char));
//	str[0] = 'p';
//	str[1] = 'x';
//	str[2] = '\0';
//	printf("%d\n", str[0]);
//	printf("%d\n", str[1]);
//	printf("%d\n", str[2]);
//	ft_bzero(str, 1);
//	printf("%d\n", str[0]);
//	printf("%d\n", str[1]);
//	printf("%d\n", str[2]);
//	free(str);
//	return (0);
//}
