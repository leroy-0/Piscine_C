/*
** calculate.c for calculate in /home/leroy_0/rendu/Piscine_C_bistromathique
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Sat Oct 31 22:20:11 2015 maxime leroy
** Last update Sun Nov  1 15:20:03 2015 maxime leroy
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

char    *verify(char *str, char *tmpleft)
{
  int   a;

  a = summands(&tmpleft);
  tmpleft = malloc(my_strlen(str) * sizeof(char));
  my_strnbr(a, tmpleft);
  return (tmpleft);
}

char    *calculate_prev(char *str)
{
  int   a;
  char  *tmpleft;
  char  *tmpmiddle;
  char  *tmpright;

  tmpmiddle = malloc(my_strlen(str) * sizeof(char));
  if (tmpmiddle == NULL)
    return (0);
  tmpright = malloc(my_strlen(str) * sizeof(char));
  if (tmpright == NULL)
    return (0);
  a = 0;
  while (str[a] != '*' && str[a] != '/' && str[a] != '%'
         && str[a] != '\0')
    a++;
  if (str[a] != '\0')
    my_strnbr(replace_middle(str), tmpmiddle);
  tmpleft = replace_left(str);
  tmpright = replace_right(str);
  my_strcat(tmpleft, tmpmiddle);
  my_strcat(tmpleft, tmpright);
  return (tmpleft);
}

char    *calculate(char *tmpleft)
{
  int   a;

  a = 0;
  while (tmpleft[a] != '*' && tmpleft[a] != '/'
         && tmpleft[a] != '%' && tmpleft[a] != '\0')
    a++;
  if (tmpleft[a] == '\0')
    return (verify(tmpleft, tmpleft));
  tmpleft = calculate_prev(tmpleft);
  return (calculate(tmpleft));
}

char    *calc_par(char *str, int a, int b, int counter)
{
  char *parenth;

  while ((str[a] != '(' && str[a] != '\0') &&
         (str[a] != ')' && str[a] != '\0'))
    a++;
  if (str[a] == '(')
    {
      counter++;
      if ((b == 0 && a > 0) || (a == 0 && b == 0))
        b = a;
    }
  if (str[a] == ')')
    counter--;
  a++;
  parenth = malloc(my_strlen(str) * sizeof(char));
  if (parenth == NULL)
    return (0);
  if (counter != 0)
    calc_par(str, a, b, counter);
  else
    {
      my_strnbcpy(parenth, str, b + 1, a - 2);
      return (parenth);
    }
}

char    *par_verify(char *str, int a, int b, int counter)
{
  int x;

  x = 0;
  str = calc_par(str, a, b, counter);
  while (str[x] != '(' && str[x] != '\0')
    x++;
  if (str[x] != '\0')
    par_verify(str, a, b, counter);
  else
    {
      if (str[my_strlen(str) - 1] == ')')
        str[my_strlen(str) - 1] = '\0';
      return (str);
    }
}
