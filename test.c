#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "0123456789";

	ft_memset(str + 2, '*', 5);

	printf("%s\n", str);

	return (0);
}