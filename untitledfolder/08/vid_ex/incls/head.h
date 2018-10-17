#ifndef __HEAD_H__   // if hello was not written then do this preprocessing untill endif
# define __HEAD_H__   // hello.
# include <stdio.h>
# include <unistd.h>
# define TOTO int    //Define int as TOTO so that int main() will be TOTO main()

void    ft_putchar(char c);
#endif