#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;


    i = 0;

    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] < s2[i])
            return (-1);

        else if(s1[i] > s2[i])
            return 1;

        else if(s1[i] == '\0')
            return (-1);

        else if(s2[i] == '\0')
            return 1;
        
        i++;
    }
    return 0;
}
/*
int main()
{
    char *s1 = "aclkgbj,dlkbdlkb,mbccsfjksjfsofjsf";
    char *s2 = "bfkjfsikolejfslkfjlnslkjf";
    printf("%d\n", ft_strcmp(s1, s2));
}
*/