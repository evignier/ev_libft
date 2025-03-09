#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char const	*s;
	size_t	i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
//
//int	main()
//{
//	return (0);
//}
