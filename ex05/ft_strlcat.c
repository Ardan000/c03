#include <unistd.h>
#include <stdio.h>

int ft_count(char *string)
{
    int i = 0;
    static int count = 0;

    while(string[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    int j = 0;
    int count = 0;

    ft_count(dest);
    count = ft_count(src);
/*
    while(dest[i] != '\0')
    {
        count++;
        i++;
    }
    i = 0;
    while(dest[i] != '\0')
    {
        count++;
        i++;
    }
*/
    printf("taille totale -> %d\n", count);


    while(dest[i] != '\0')
        i++;

    while(src[j] != '\0' && i < (size - 1))
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return count;
}
/*
int main()
{
    char dest[256] = "yosfsfseflo";
    char src[256] = "losdfsfsdfsfl";
    unsigned int size = 25;
    ft_strlcat(dest, src, size);
    printf("%s\n", dest);
}
*/