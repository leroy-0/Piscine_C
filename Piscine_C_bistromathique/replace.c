/*
** replace.c for replace in /home/leroy_0/rendu/Piscine_C_bistromathique
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Sat Oct 31 22:18:55 2015 maxime leroy
** Last update Sun Nov  1 17:39:27 2015 maxime leroy
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

char    *replace_left(char *str)
{
  int   a;
  char  *tmpleft;

  a = 0;
  tmpleft = malloc(my_strlen(str) * sizeof(char));
  if (tmpleft == NULL)
    return (0);
  while (str[a] != '*' && str[a] != '/' && str[a] != '%')
    a++;
  a--;
  while ((str[a] <= '9' && str[a] >= '0') && a != 0)
    a--;
  if (str[a] != '+' && str[a] != '-')
    a--;
  if (a == 0)
    return (tmpleft);
  my_strnbcpy(tmpleft, str, 0, a);
  return (tmpleft);
}

char    *replace_right(char *str)
{
  int   a;
  char  *tmpright;

  a = 0;
  tmpright = malloc(my_strlen(str) * sizeof(char));
  if (tmpright == NULL)
    return (0);
  while (str[a] != '*' && str[a] != '/' && str[a] != '%')
    a++;
  while (str[a] != '+' && str[a] != '-' && str[a] != '\0')
    {
      a++;
      if ((str[a - 1] == '*' || str[a - 1] == '/' || str[a - 1] == '%')
	  && str[a] != '\0')
	a++;
    }
  if (str[a] != '*' && str[a] != '/' && str[a] != '%'
      && str[a] != '\0')
    {
      my_strnbcpy(tmpright, str, a, (my_strlen(str) - 1));
    }
  return (tmpright);
}

int	replace_middle2(char *str, int a)
{
  while (str[a] != '+' && str[a] != '-' && str[a] != '\0')
    {
      a++;
      if ((str[a - 1] == '*' || str[a - 1] == '/'
	  || str[a - 1] == '%') && str[a] != '\0')
	a++;
    }
  return (a);
}

int     replace_middle(char *str)
{
  int   a;
  int   b;
  char  *tmpmiddle;

  a = 0;
  b = 0;
  tmpmiddle = malloc(my_strlen(str) * sizeof(char));
  if (tmpmiddle == NULL)
    return (0);
  while (str[a] != '*' && str[a] != '/' && str[a] != '%')
    a++;
  a--;
  while (str[a] <= '9' && str[a] >= '0' && a != 0)
    a--;
  if (str[a] == '+' || str[a] == '-' || a == 0)
    {
      if (a != 0)
        a++;
      b = a;
      a = replace_middle2(str, a);
      my_strnbcpy(tmpmiddle, str, b, a - 1);
    }
  return (factors(&tmpmiddle));
}
