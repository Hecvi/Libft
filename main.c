/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:17:58 by klaurine          #+#    #+#             */
/*   Updated: 2019/06/20 20:17:05 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

/*
char *ft_strcat(char *s1, const char *s2);

int		main(void)
{
	char dst[1024] = "ABCD";
	char dst1[1024] = "ABCD";
	char src[1024] = "EFGH";
	printf("%s\n", ft_strcat(dst, src));
	printf("%s\n", strcat(dst1, src));
return (0);
}
*/

/*
size_t ft_strlcat(char *dst, char *src, size_t size);

int		main(void)
{
	char dst[10] = "A";
	char dst1[10] = "A";
	char src[27] = "abcdefghijklmnopqrstuvwxyz";
	printf("%lu\n", ft_strlcat(dst, src, 8));
	printf("%lu\n", strlcat(dst1, src, 8));
	write(1, dst, 15);
	write(1, "\n", 1);
	write(1, dst1, 15);
	return (0);
}
*/

/*
char *ft_strncat(char *s1, const char *s2, size_t n);

int		main(void)
{
	char dst[1024] = "ABCD";
	char dst1[1024] = "ABCD";
	char src[1024] = "EFGH";
	printf("%s\n", ft_strncat(dst, src, 10));
	printf("%s\n", strncat(dst1, src, 10));
	return (0);
}
*/

/*
int		main(void)
{
	int i;
	char *str = "1234567890";
	
	i = 10;
	while (i--)
		write(1, &str[i], 1);
	write(1, "\n", 1);
	
	i = 0;
	while (i < 10)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);

	i = 0;
	while (i++ < 10)
		write(1, &str[i], 1);
		write(1, "\n", 1);

	i = 0;
	while (++i < 10)
		write(1, &str[i], 1);
	return (0);
}
*/

/*
int		ft_memcmp(const void *dst, const void *src, size_t n);

int		main(void)
{
	char *str1 = "DWgaOtP12df0";
	char *str2 = "DWGAOTP12DF0";
	
	printf("%d\n", memcmp((void *)str1, (void *)str2, 4));
	printf("%d\n", ft_memcmp((void *)str1, (void *)str2, 4));
	return (0);
}
*/

/*
char *ft_strrchr(const char *s, int c);

int		main(void)
{
	const char *s = "MABCDEFGHIJKLMNOPQRST";
	printf("%s\n", ft_strrchr(s, 'M'));
	printf("%s\n", strrchr(s, 'M'));
return (0);
}
*/

/*
char *ft_strchr(const char *s, int c);

int		main(void)
{
	const char *s = "AMBCDEFGHIJKLMNOPQRST";
	printf("%s\n", ft_strchr(s, 'M'));
	printf("%s\n", strchr(s, 'M'));
return (0);
}
*/

/*
void	ft_bzero(void *s, size_t n);

int		main(int ac, const char **av)
{
	void *string;

	string = malloc(sizeof(*string) * 10);
	if (ac == 1 || string == 0)
		return (0);
	if (atoi(av[1]) == 1)
	{
		memset(string, 'Z', 10);
		ft_bzero(string, 10);
		write(1, string, 10);
		write(1, "\n", 1);
		memset(string, 'Z', 10);
		bzero(string, 10);
		write(1, string, 10);
	}
	else if (atoi(av[1]) == 2)
	{
		memset(string, 'Z', 10);
		ft_bzero(string, 0);
		write(1, string, 10);
		write(1, "\n", 1);
		memset(string, 'Z', 10);
		bzero(string, 0);
		write(1, string, 10);
	}
	return (0);
}
*/


void	*ft_memcpy(void *dst, const void *src, size_t n);

int		main(int ac, const char **av)
{
	void *string;

	string = malloc(sizeof(*string) * 0);
	if (ac == 1 || string == 0)
		return (0);
	if (atoi(av[1]) == 1)
	{
		memset(string, 'Z', 10);
		ft_memcpy(string, "AAAAA", 5);
		write(1, string, 10);
		write(1, "\n", 1);
		memset(string, 'Z', 10);
		memcpy(string, "AAAAA", 5);
		write(1, string, 10);
	}
	else if (atoi(av[1]) == 2)
	{
		memset(string, 'Z', 10);
		ft_memcpy(string, "AAAAAAAAAA", 10);
		write(1, string, 10);
		write(1, "\n", 1);
		memset(string, 'Z', 10);
		memcpy(string, "AAAAAAAAAA", 10);
		write(1, string, 10);
	}
	else if (atoi(av[1]) == 3)
	{
		memset(string, 'Z', 10);
		ft_memcpy(string, "AAAAA\0\0\0\0\0", 10);
		write(1, string, 10);
		write(1, "\n", 1);
		memset(string, 'Z', 10);
		memcpy(string, "AAAAA\0\0\0\0\0", 10);
		write(1, string, 10);
	}
	else if (atoi(av[1]) == 4)
	{
		memset(string, '\0', 10);
		ft_memcpy(string, "\0", 10);
		write(1, string, 10);
		write(1, "\n", 1);
		memset(string, '\0', 10);
		memcpy("\0", "\0", 10);
		write(1, string, 10);
	}
	else if (atoi(av[1]) == 5)
	{
		printf("%s my\n", (char *)ft_memcpy((void *)0, (void *)0, 5));
		printf("%s lib\n", (char *)memcpy((void *)0, (void *)0, 5));
	}
	return (0);
}


/*
void	*ft_memset(void *b, int c, size_t len);

int		main(int ac, const char **av)
{
	void	*string;

	string = malloc(sizeof(*string) * 10);
	if (ac == 1 || string == 0)
		return (0);
	memset(string, 'Z', 10);
	if (atoi(av[1]) == 1)
	{
		ft_memset(string, 'A', 5);
		write(1, string, 10);
		memset(string, 'Z', 10);
		write(1, "\n", 1);
		memset(string, 'A', 5);
		write(1, string, 10);
	}
	else if (atoi(av[1]) == 2)
	{
		ft_memset(string, 'A', 9);
		write(1, string, 10);
		memset(string, 'Z', 10);
		write(1, "\n", 1);
		ft_memset(string, 'A', 9);
		write(1, string, 10);
	}
	else if (atoi(av[1]) == 3)
	{
		ft_memset(string, '\n', 1);
		write(1, string, 10);
		memset(string, 'Z', 10);
		write(1, "\n", 1);
		ft_memset(string, '\n', 1);
		write(1, string, 10);
	}
	else if (atoi(av[1]) == 4)
	{
		ft_memset(string, '\0', 9);
		write(1, string, 10);
		memset(string, 'Z', 10);
		write(1, "\n", 1);
		ft_memset(string, '\0', 9);
		write(1, string, 10);
	}
	return (0);
}
*/

/*
int		ft_strcmp(const char *s1, const char *s2);

int		main(void)
{
	const char *s1 = "\200";
	const char *s2 = "\0";
	
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	return (0);
}
*/

/*
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		main(void)
{
	const char *s1 = "1234567890";
	const char *s2 = "1234567790";
	
	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));
	return (0);
}
*/

/*
int		ft_isalpha(int c);

int		main(void)
{
	printf("%d\n", ft_isalpha(99));
	printf("%d\n", isalpha(99));
	return (0);
}
*/

/*
int		ft_isdigit(int c);

int		main(void)
{
	printf("%d\n", ft_isdigit(55));
	printf("%d\n", isdigit(55));
	return (0);
}
*/

/*
int		ft_isalnum(int c);

int		main(void)
{
	printf("%d\n", ft_isalnum(99));
	printf("%d\n", isalnum(99));
	return (0);
}
*/

/*
int		ft_isascii(int c);

int		main(void)
{
	printf("%d\n", ft_isascii(128));
	printf("%d\n", isascii(128));
	return (0);
}
*/

/*
int		ft_isprint(int c);

int		main(void)
{
	printf("%d\n", ft_isprint(31));
	printf("%d\n", isprint(31));
	return (0);
}
*/

/*
int		ft_toupper(int c);

int		main(void)
{
	printf("%d\n", ft_toupper(300));
	printf("%d\n", toupper(300));
	return (0);
}
*/

/*
int		ft_tolower(int c);

int		main(void)
{
	printf("%d\n", ft_tolower(70));
	printf("%d\n", tolower(70));
	return (0);
}
*/

/*
char	*ft_strstr(const char *haystack, const char *needle);

int		main(void)
{
	const char *s1 = "123451234567890";
	const char *s2 = "123456";
	
	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, s2));
	return (0);
}
*/

/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		main(void)
{
	const char *s1 = "1234567890";
	const char *s2 = "";
	
	printf("%s\n", ft_strnstr(s1, s2, 8));
	printf("%s\n", strnstr(s1, s2, 8));
	return (0);
}
*/

/*
void *ft_memchr(const void *s, int c, size_t n);

int		main(void)
{
	const char *s = "AMBCDEFGHIJKLMNOPQRST";
	printf("%s\n", ft_memchr((void *)s, 'Q', 21));
	printf("%s\n", memchr((void *)s, 'Q', 21));
return (0);
}
*/

/*
int		ft_atoi(const char *str);

int		main(void)
{
	char *str = "9223372036854775808";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}
*/

/*
char	*ft_strmap(char const *s, char (*f)(char));

char	f(char c)
{
	return (c + 1);
	
}

int		main(void)
{
	char *s = "abdcefghigklmnop";
	printf("%s", ft_strmap(s, &f));
	return (0);
}
*/

/*
void	ft_putnbr(int n);

int		main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/

/*
char	*ft_strrev(char *s);

int		main(void)
{
	char s[7] = "123456";
	printf("%s\n", ft_strrev(s));
	return (0);
}
*/

/*
char	*ft_itoa(int n);

int		main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
*/

/*
char **ft_strsplit(char const *s, char c);

int main(void)
{
	char *a = "*****1";
	char **b = ft_strsplit(a, '*');

	int i = -1;
	while(b[++i])
		printf("%s\n", b[i]);
	return (0);
}
*/

/*
int		ft_strnequ(const char *s1, const char *s2, size_t n);

int		main(void)
{
	const char *s1 = "abcd";
	const char *s2 = "zxyw";
	
	printf("%d\n", ft_strnequ(s1, s2, 0));
	return (0);
}
*/

/*
int		*ft_sort_array(int *s, int size);

int		main(void)
{
	int i;

	i = 0;
	int s[5] = {1, 0, -1, 100, 17};
	int size = 5;
	ft_sort_array(s, size);
	while (i < size)
	{
		printf("%d\n", s[i]);
		i++;
	}
	return (0);
}
*/

/*
void	print_bits(unsigned char octet);

int		main(void)
{
	unsigned char octet;

	octet = '&';
	print_bits(octet);
	write(1, "\n", 1);
	return (0);
}
*/

/*
unsigned char	reverse_bits(unsigned char octet);

int		main(void)
{
	unsigned char octet;

	octet = '&';
	printf("%c\n", reverse_bits(octet));
	return (0);
}
*/

/*
unsigned char	swap_bits(unsigned char octet);

int		main(void)
{
	char c;
	c = 'd';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = swap_bits(c);
	write(1, &c, 1);
	return (0);
}
*/