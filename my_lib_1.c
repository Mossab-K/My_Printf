/*
** my_lib_1.c for  in /Users/kaimou_m/Desktop/mo_printf
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Fri Apr  8 14:23:15 2016 KAIMOUNI Mossab
** Last update Fri Apr  8 14:30:24 2016 KAIMOUNI Mossab
*/
#include "my_printf.h"

void  my_putchar(char c)
{
  write(1, &c, 1);
}

void  my_putstr(char *str)
{
  while (*str != '\0')
  {
    my_putchar(*str);
    str = str + 1;
  }
}

int   my_strlen(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
  {
    str = str + 1;
    i++;
  }
  return (i);
}

void  my_put_nbr(int nb)
{
  int i;
  int res;
  
  i = 1;
  res = 0;
  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
  {
    if (nb < 0)
      {
	my_putchar('-');
	nb = nb * -1;
      }
    while ((nb / i) >= 10)
      i = i * 10;
    while (i > 0)
      {
	res = (nb / i) % 10;
	my_putchar(res + '0');
	i = i / 10;
      }
  }
}

void  my_put_unsigned_nbr(unsigned int nb)
{
  int   i;
  int   res;

  i = 1;
  res = 0;
  while ((nb / i) >= 10)
    i = i * 10;
  while (i > 0)
    {
      res = (nb / i) % 10;
      my_putchar(res + '0');
      i = i / 10;
    }
}
