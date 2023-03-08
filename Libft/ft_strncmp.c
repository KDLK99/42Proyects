/*#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, int n);

int	main()
{
	char	s1[] = "Hola Mundo";
	char	s2[] = "Hola Mundo";

	printf("%d\n", ft_strncmp(s1, s2, 42));
	printf("%d", strncmp(s1, s2, 42));
	return (0);
}*/

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
