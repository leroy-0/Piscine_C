/*
** my_strnbcpy.c for strnbcpy in /home/leroy_0/rendu/Piscine_C_evalexpr
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Thu Oct 22 19:18:02 2015 maxime leroy
** Last update Wed Oct 28 16:38:50 2015 maxime leroy
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

char    *my_strnbcpy(char *dest, char *src, int nb, int nb2)
{
  int x;

  x = 0;
  while (nb <= nb2)
    {
      dest[x] = src[nb];
      nb++;
      x++;
    }
  return (dest);
}
