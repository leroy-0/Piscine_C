/*
** my_strnbr.c for my_strnbr in /home/leroy_0/rendu/Piscine_C_evalexpr
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Fri Oct 23 18:25:09 2015 maxime leroy
** Last update Wed Oct 28 14:37:14 2015 maxime leroy
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

char	*negative(long nb, char *str, int a, int x)
{
  nb = nb * -1;
  if (nb >= 10)
    {
      while (nb != 0)
	{
	  a = nb % 10;
	  str[x] = '0' + a;
	  nb = nb / 10;
	  x++;
	}
      str[x] = '-';
      str[x + 1] = '\0';
      my_revstr(str);
      return (str);
    }
  else
    {
      str[0] = '-';
      str[1] = '0' + nb;
      str[2] = '\0';
    }
  return (str);
}

char	*positive(long nb, char *str, int a, int x)
{
  if (nb >= 10)
    {
      while (nb != 0)
	{
	  a = nb % 10;
	  str[x] = '0' + a;
	  nb = nb / 10;
	  x++;
	}
      str[x] = '\0';
      my_revstr(str);
      return (str);
    }
  else
    {
      str[0] = '0' + nb;
      str[1] = '\0';
    }
  return (str);
}

char	*my_strnbr(long nb, char *str)
{
  int a;
  int x;

  a = 0;
  x = 0;
  if (nb < 0)
    return (negative(nb, str, a, x));
  return (positive(nb, str, a, x));
}
