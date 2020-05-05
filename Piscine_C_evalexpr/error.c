/*
** error.c for error in /home/leroy_0/rendu/Piscine_C_evalexpr
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Sun Nov  1 14:55:15 2015 maxime leroy
** Last update Sun Nov  1 20:41:22 2015 maxime leroy
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

# define SYNTAXE_ERROR_MSG "syntax error"

int	error(char *str)
{
  int   a;
  int   counter;

  a = 0;
  counter = 0;
  while (str[a] != '\0')
    {
      if (str[a] != '(' && str[a] != ')')
        a++;
      if (str[a] == '(' || str[a] == ')')
        {
          counter++;
          a++;
        }
    }
  counter = counter % 10;
  if (counter == 1 || counter == 3 || counter == 5 || counter == 7
      || counter == 9)
    {
      write(1, SYNTAXE_ERROR_MSG, 12);
      return (1);
    }
  return (0);
}

int	error1(char *str)
{
  int a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] == '/' && str[a + 1] == '0')
        {
          write(1, SYNTAXE_ERROR_MSG, 12);
          return (1);
        }
      else
        a++;
    }
  return (0);
}

int	error2(char *str)
{
  int a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] != '+' && str[a] != '-' && str[a] != '/'
          && str[a] != '*' && str[a] != '(' && str[a] != '%'
	  && str[a + 1] == '(')
        {
          write(1, SYNTAXE_ERROR_MSG, 12);
          return (1);
        }
      else
        a++;
    }
  return (0);
}

int	error3(char *str)
{
  int a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] != '+' && str[a] != '-' && str[a] != '/'
          && str[a] != '*' && str[a] != '(' && str[a] != '%' &&
	  (str[a] > '9' || str[a] < '0') && str[a] != ')')
        {
          write(1, SYNTAXE_ERROR_MSG, 12);
          return (1);
        }
      else
        a++;
    }
  return (0);
}

int	error4(char *str)
{
  int a;

  a = 0;
  while (str[a] != '\0')
    {
      if ((str[a] == '*' && str[a + 1] == '*') ||
	  (str[a] == '/' && str[a + 1] == '/') ||
	  (str[a] == '%' && str[a + 1] == '%'))
	{
	  write(1, SYNTAXE_ERROR_MSG, 12);
	  return (1);
	}
      else
	a++;
    }
  return (0);
}
