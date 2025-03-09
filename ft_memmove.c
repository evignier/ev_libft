#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	char	*d;
	char	*s;
	int	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (s < d)
	{
		i = n - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
		ft_memcpy(d, s, n);
}
//
//int	main()
//{
//	char	src[3] = "ab";
//	char	dest[3] = "cd";
//	size_t	n;
//
//	n = 1;
//	ft_memmove(dest, src, n);
//	return (0);
//}
//
//int	main()
//{
//	char	dest[3] = "ef";
//	char	src[3] = "gh";
//	size_t	n;
//
//	n = 1;
//	ft_memmove(dest, src, n);
//	return (0);
//}
