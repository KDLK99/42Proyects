/*#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main()
{
	printf("%c\n", ft_toupper('o'));
	printf("%c", toupper('o'));
}*/

int	ft_toupper(int c)
{
	return (c - 32);
}
