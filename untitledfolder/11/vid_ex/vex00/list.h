#ifndef __list_h__
#define __list_h__

typedef struct s_list t_list;

struct s_list {
    char *str;
    t_list *next; 
};

void ft_putstr();
t_list *add_link(t_list *list, char *str);
void print_list(t_list *list);
#endif