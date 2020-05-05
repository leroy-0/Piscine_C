/*
** my_strnberase.c for my_strnberase in /home/leroy_0/rendu/Piscine_C_evalexpr
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Fri Oct 30 19:38:46 2015 maxime leroy
** Last update Sun Nov  1 14:06:50 2015 maxime leroy
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

char    *my_strnberase(char *src, int nb, int nb2)
{
  int x;
  char *res;

  res = malloc(my_strlen(src) * sizeof(src));
  if (res == NULL)
    return (0);
  x = 0;
  while (x < nb)
    {
      res[x] = src[x];
      x++;
    }
  nb2++;
  while (src[nb2] != '\0')
    {
      res[x] = src[nb2];
      nb2++;
      x++;
    }
  return (res);
}
