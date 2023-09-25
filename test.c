#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	size_t		pos;
	char		*p;

	if(!s)
		return (NULL);
	p = (char *)s;
	i = 0;
	pos = 0;
	if (c == 0)
		return (&p[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == c)
			pos = i;
		i++;
	}
	if (pos == 0)
		return (NULL);
	else
		return (&p[pos]);
}

int main(void)
{
	char str[] = "abcdefghijk\0lmnabcdefghijklmn", *p;
	int c;

	printf("検索文字を入力してください。");
	c = 0;
	
	p = strrchr(str, c);
	if (p != NULL) {
		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("%cは見つかりませんでした\n", c);
		
	return 0;
}