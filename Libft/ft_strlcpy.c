/*#include <stdio.h>
#include <string.h>

void ft_strlcpy(char *dest, char *src, int n);

int main()
{
	char dest1[42];
	char dest2[42];
	char src[] = "";

	ft_memmove(dest1, src, 0);
	memmove(dest2, src, 0);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	return (0);
}*/

int	ft_strlcpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}
