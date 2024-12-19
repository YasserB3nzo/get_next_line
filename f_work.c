#include "get_next_line.h"
int checknewline(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(str[i]=='\n')
            return (i);
        i++;
    }
    return(0);
}
char *f_work(char *staticholder)
{
    int i;
    char *buffer;
    i = checknewline(staticholder);
    if(i != 0)
    {
        i++;
        buffer = malloc(i);
        if(!buffer)
            return (NULL);
        ft_strncpy(buffer,staticholder,i);
        ft_strtrim(&staticholder);
        return(buffer);
    }
    return(staticholder);
}
