#include<stdio.h>
int lol(char *c){
    printf("%c\n", *c);
    return 1;
}

int    ft_any(char **tab, int(*f)(char*))
{
    int flag;
    char *ptr;

    flag = 0;
    ptr = *tab;
    while (*ptr)
    {
        if (f(ptr) != 0)
            flag = 1;
        ptr++;
    }
    return (flag);
}

int main(void)
{
    
    char slovo[] = "Hello";
    char *ptr = slovo;
    char **word = &ptr;
    ft_any(word, &lol);
}
