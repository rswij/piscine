#include "./incls/head.h" //still figure out how to use pointers to structs.

typedef struct s_point  //is to declare multiple variable and their data type in 1 line
{                       //which is t_point a
    int x;
    int y;
}               t_point;

void    ft_test(void)
{
    t_point z;
    printf("x is %d\ny is %d\n", z.x, z.y);
}

int     main()
{
    t_point a;
    t_point *ptr;
    char    c;

    ptr = &a;
    ptr->x = 4;
    c = '0' + *ptr;
    //printf("x is according to pointer %i\n", *ptr);

    a.x = 4;
    a.y = 42;
    printf("x is %d\ny is %d\n", a.x, a.y);
    ft_test();

    return(0);
}

