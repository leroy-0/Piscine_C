/*
** execute.c for execute in /home/leroy_0/rendu/Piscine_C_bistromathique
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Sat Oct 31 22:21:09 2015 maxime leroy
** Last update Sun Nov  1 20:45:23 2015 maxime leroy
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

# define BUFF_SIZE (4096)
# define SYNTAXE_ERROR_MSG "syntax error"

char    *pre_exec(char *str, char *tmp, int c, int a)
{
  str = my_strnberase(str, c - 1, a);
  tmp = calculate(tmp);
  str = my_strnbput(tmp, str, c - 1);
  return (str);
}

char    *execute(char *str, int counter)
{
  int a;
  int b;
  int c;
  char *tmp;

  a = 0;
  b = 0;
  tmp = malloc(my_strlen(str) * sizeof(str));
  if (tmp == NULL)
    return (0);
  tmp = par_verify(str, a, b, counter);
  while (str[a] != tmp[b] || str[a - 1] != '(')
    a++;
  c = a;
  if (str[a - 1] == '(')
    {
      while (str[a] == tmp[b])
        {
          a++;
          b++;
        }
    }
  str = pre_exec(str, tmp, c, a);
  return (str);
}

char    *final_execute(char *str)
{
  int a;
  int counter;

  a = 0;
  counter = 0;
  while (str[a] != '(' && str[a] != '\0')
    a++;
  if (str[a] != '\0')
    {
      str = execute(str, counter);
      final_execute(str);
    }
  else
    {
      str = calculate(str);
      return (str);
    }
}

char    *buffer()
{
  char  buff[BUFF_SIZE + 1];
  int   len;
  char  *stock;
  char  *stock2;

  stock = "";
  while ((len = read(0, buff, BUFF_SIZE)) > 0)
    {
      buff[len] = '\0';
      stock2 = stock;
      stock = malloc(sizeof(char) * (len + my_strlen(stock) + 1));
      if (stock == NULL)
	return (0);
      my_strcat(stock, stock2);
      my_strcat(stock, buff);
    }
  stock[my_strlen(stock) - 1] = '\0';
  return (stock);
}

int     main(int argc, char **argv)
{
  char  *str;

  str = buffer();
  str = no_space(str);
  argv = argv;
  if (str[0] == '\0')
    {
      write(1, SYNTAXE_ERROR_MSG, 12);
      return (1);
    }
  if (argc != 4)
    {
      my_putstr("Usage : ");
      my_putstr(argv[0]);
      my_putstr(" base ops\"()+-*/%\" exp_len");
      return (1);
    }
  if (error(str) == 1 || error2(str) == 1 || error2(str) == 1 ||
      error3(str) == 1 || error4(str) == 1)
    return (1);
  my_putstr(final_execute(str));
  return (0);
}
