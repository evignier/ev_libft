size_t	ft_strlen(char const *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
//
//int	main()
//{
//	return (0);
//}
