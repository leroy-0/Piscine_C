/*
** calcul.c for calcul in /home/leroy_0/rendu/Piscine_C_bistromathique
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Sat Oct 31 22:17:11 2015 maxime leroy
** Last update Sun Nov  1 21:18:39 2015 maxime leroy
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

# define SYNTAXE_ERROR_MSG "syntax error"
# define ERROR_MSG "Error"

int     number(char **str)
{
  int   a;
  int   ret;

  a = 0;
  ret = 0;
  while (str[0][a] >= '0' && str[0][a] <= '9')
    {
      ret = (ret * 10) + (str[0][a] - '0');
      a++;
    }
  *str += a;
  return (ret);
}

int     summands(char **str)
{
  long  ret;

  ret = number(str);
  while (str[0][0] != '\0')
    {
      if (str[0][0] == '+')
        {
          *str += 1;
          ret = ret + number(str);
        }
      if (str[0][0] == '-')
        {
          *str += 1;
          ret = ret - number(str);
        }
    }
  if (ret >= 2147483648 || ret <= -2147483648)
    return (0);
  return ((int) (ret));
}

long	fact_condi_premod(char **str, long ret)
{
  if (str[0][0] == '*')
    {
      *str += 1;
      if (str[0][0] == '-')
	{
	  *str += 1;
	  ret = ret * -number(str);
	}
      else
	ret = ret * number(str);
    }
  if (str[0][0] == '%')
    {
      *str += 1;
      if (str[0][0] == '-')
	{
	  *str += 1;
	  ret = ret % -number(str);
	}
      else
	ret = ret % number(str);
    }
  return (ret);
}

long	fact_condi_pre(char **str, long ret)
{
  *str += 1;
  if (str[0][0] == '-')
    {
      *str += 1;
      if (str[0][0] == '0')
	{
	  write(1, ERROR_MSG, 5);
	  return ('F');
	}
      ret = ret / -number(str);
    }
  else
    {
      if (str[0][0] == '0')
	{
	  write(1, ERROR_MSG, 5);
	  return ('F');
	}
      else
	ret = ret /  number(str);
    }
  return (ret);
}

int     factors(char **str)
{
  long  ret;
  long	a;

  a = number(str);
  while (str[0][0] != '\0')
    {
      if (str[0][0] == '*')
	a = fact_condi_premod(str, a);
      if (str[0][0] == '/')
	{
	  a = fact_condi_pre(str, a);
	  if (a == 'F')
	    exit(1);
	}
      if (str[0][0] == '%')
        a = fact_condi_premod(str, a);
    }
  ret = a;
  if (ret >= 2147483648 || ret <= -2147483648)
    return (1);
  return ((int) (ret));
}
