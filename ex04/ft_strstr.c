#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    int k = 0;

   // char start[256];

    if(str[i] == '\0')
        return str[i];

    while(to_find[j] != '\0')
    {
        j++;
        k++;
    }
    j = 0;

    while(str[i] != '\0')
    {
        if(str[i] != to_find[j])
        {
            i++;
            j = 0;
        }
        else if(str[i] == to_find[j])
            j++;
        else if(j == k)
        {
            i = i - j;
           // start[0] = str[i];
            return str[i];
        }
    }
    return NULL;
}

int main()
{
    char *str = "bonjour, je m'appelle stanislas";
    char *to_find = "je m'app";
    printf("%s\n", ft_strstr(str, to_find));
}