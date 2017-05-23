/*
** my_printf.h for  in /Users/kaimou_m/Desktop/mo_printf
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Fri Apr  8 14:21:23 2016 KAIMOUNI Mossab
** Last update Fri Apr  8 14:24:30 2016 KAIMOUNI Mossab
*/
#ifndef __MY_PRINTF_H__
#define __MY_PRINTF_H__

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <dirent.h>
#include <stdarg.h>

void 	(*my_tab_printf[120])(va_list	list);
char 	my_tab_opt[10];

int		my_printf(char *str, ...);
void	my_printf_upper_x(va_list		list);
void	my_printf_o(va_list		list);
void	my_printf_u(va_list		list);
void	my_printf_x(va_list		list);
void	my_printf_s(va_list		list);
void	my_printf_c(va_list		list);
void	my_printf_i(va_list		list);
void	my_printf_d(va_list		list);
void  	my_put_unsigned_nbr(unsigned int nb);
char	*get_base_str(char base_type);
void	my_put_base_nbr(int nb, char base_type);
void	init_tab_and_pointer();
int		char_in_array(char *tab, char letter);
void    my_putchar(char c);
void    my_putstr(char *str);
int     my_strlen(char *str);
void	my_put_nbr(int nb);

#endif
