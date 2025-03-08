//#include <stdio.h>
//
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;
	size_t	i;

	ptr = s;
	value = (unsigned char)c;

	i = 0;
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (ptr);
}
//
//int	main()
//{
//	char	s[5] = "pera";
//	int	c;
//	size_t	n;
//
//	c = 'j';
//	n = 3;
//	ft_memset(s, c, n);
//	printf("%s\n", s);
//	return (0);
//}
