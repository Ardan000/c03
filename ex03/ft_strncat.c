#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    unsigned int j = 0;

    while(dest[i] != '\0')
        i++;

    while(src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    if(j < nb)
        dest[i] = '\0';

    return dest;
}
/*
int main()
{
    char dest[256] = "je suis ";
    char *src = "stanislas";
    unsigned int nb;
    nb = 0;
    
    printf("%s\n", ft_strcat(dest, src, nb));
}
*/