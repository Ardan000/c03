#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while(dest[i] != '\0')
        i++;

    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return dest;
}
/*
int main()
{
    char dest[256] = "yolo";
    char *src = "lol";
    
    printf("%s\n", ft_strcat(dest, src));
}
*/