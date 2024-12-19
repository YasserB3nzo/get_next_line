#include <stdio.h>

void inctest(char **a)
{
    int i  = 0;
    while(i <5)
    {
        (*a)++;
        i++;   
    }
    
}
void printtest(char *c)
{
    printf("%s",c);
}
int main()
{
    static char *test = "yasserbenzidiya";
    inctest(&test);
    printtest(test);

}
