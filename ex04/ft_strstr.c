#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    int k = 0;


    if(str[i] == '\0')
        return &str[i];

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
        {
            j++;
            i++;
        }
        if(j == k)
        {
            i = i - j;
            return &str[i];
        }
    }
    return NULL;
}
/*
int main()
{
    char str[] = "bonjour, je m'appelle stanislas";
    char to_find[] = "je";
    char *result;
    result = ft_strstr(str, to_find);
    if(result)
        printf("trouver dans %s\n", result);
    else    
        printf("pas trouver\n");

}
*/