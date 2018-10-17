void    ft_putchar(char c);

int     main()
{
void (*ptr_ft)(char);// declaration pointer to function

ptr_ft = &ft_putchar;
ptr_ft('z');
return(0);
}