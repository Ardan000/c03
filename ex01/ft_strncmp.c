#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;

    while((s1[i] != '\0' || s2[i] != '\0') && i <= n)
    {
        if(s1[i] == '\0')
            return (-1);

        else if(s2[i] == '\0')
            return 1;
        i++;
    }
    
    i = 0;

    while((s1[i] != '\0' && s2[i] != '\0') && i <= n) 
    {
        if(s1[i] < s2[i])
        {
            return (-1);
        }
        else if(s1[i] > s2[i])
        {
            return 1;
        }
        
        i++;
    }
    return 0;
}
/*
int main()
{
    char *s1 = "abcdf";
    char *s2 = "abcde";
    int n = 4;
    printf("%d\n", ft_strcmp(s1, s2, n));
}
*/