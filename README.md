# Ft_printf-42

ft_printf é o terceiro projeto da École 42 e a proposta é fazer o seu próprio printf, que deveria:
%c para printar um único caracter;
%s printar uma string de caracteres;
%p printar o endereço do ponteiro em hexadecimal;
%d printar um número decimal (base 10);
%i printar um inteiro (base 10);
%u printar um unsigned decimal (base 10);
%x printar um número em hexadecimal, minúsculo;
%X printar um número em hexadecimal, maiúsculo;
%% printar o sinal de porcentagem;

Utilizei uma função variádica (src, ...) e as funções externas permitidas: va_start, va_arg, va_copy, va_end, malloc, free e write.
Teste utilizado: https://github.com/Tripouille/printfTester
