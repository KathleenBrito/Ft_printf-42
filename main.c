#include <stdio.h>
#include "ft_printf.h"
#include "ft_printf_utils.c"
#include "ft_printf.c"
#include "ft_treat_c.c"
#include "ft_treat_d.c"
#include "ft_treat_p.c"
#include "ft_treat_s.c"
#include "ft_treat_x.c"
#include "ft_utils.c"

int main(void)
{
    char *pointer = ft_calloc(6, 6);
    pointer[0] = 'f';
    pointer[1] = 'r';
    pointer[2] = 'i';
    pointer[3] = 'e';
    pointer[4] = 'n';
    pointer[5] = 'd';

    char character = 'a';

    printf("hello int%i\n", 10);
    printf("hello int%i\n", 0);
    printf("hello int%i\n", -10);
    ft_printf("hello int%i\n", 10);
    ft_printf("hello int%i\n", 0);
    ft_printf("hello int%i\n\n", -10);
    
    printf("hello int% i\n", 10);
    printf("hello int% i\n", 0);
    printf("hello int% i\n", -10);
    ft_printf("hello int%i\n", 10);
    ft_printf("hello int%i\n", 0);
    ft_printf("hello int%i\n\n", -10);
    
    printf("hello %d\n", 10);
    printf("hello %d\n", 0);
    printf("hello %d\n", -10);
    ft_printf("hello %d\n", 10);
    ft_printf("hello %d\n", 0);
    ft_printf("hello %d\n\n", -10);

    printf("hello % d\n", 10);
    printf("hello % d\n", 0);
    ft_printf("hello % d\n", 10);
    ft_printf("hello % d\n\n", 0);

    printf("hello char%c\n", character);
    ft_printf("hello char%c\n\n", character);

    printf("hello pointer%p\n", &pointer);
    ft_printf("hello pointer%p\n\n", &pointer);

    printf("hello string%s\n", pointer);
    ft_printf("hello string%s\n\n", pointer);

    printf("hello hexa%x\n", 1459);
    printf("hello hexa%x\n", 5789);
    ft_printf("hello hexa%x\n", 1459);
    ft_printf("hello hexa%x\n\n", 5789);

    printf("hello HEXA%X\n", 1459);
    printf("hello HEXA%X\n", 5789);
    ft_printf("hello HEXA%X\n", 1459);
    ft_printf("hello HEXA%X\n\n", 5789);
    
    printf("hello %%\n");
    printf("hello0000 %%\n\n");
    ft_printf("hello %%\n");
    ft_printf("hello0000 %%\n\n");
    
    return(0);
}
