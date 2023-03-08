/*#include <stdio.h>
#include <string.h>

void *ft_memmove(char *dest, char *src, int n);

int main()
{
	char dest1[42];
	char dest2[42];
	char src[] = "Hola";

	ft_memmove(dest1, src, 2);
	memmove(dest2, src, 2);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	return (0);
}*/

void	*ft_memmove(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
