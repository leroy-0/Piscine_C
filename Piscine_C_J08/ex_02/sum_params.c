/*
** sum_params.c for sum_params in /home/leroy_0/rendu/Piscine_C_J08/ex_02
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Oct  7 10:55:50 2015 maxime leroy
** Last update Wed Oct  7 21:33:57 2015 maxime leroy
*/

#include <stdlib.h>

char	*sum_params(int argc, char **argv)
{
  int a;
  int length;
  char *str;

  a = 0;
  length = 0;
  while (a < argc)
    {
      length = length + my_strlen(argv[a]);
      a++;
    }
  a = 0;
  str = malloc(length + argc);
  while (a < argc)
    {
      my_strcat(str, argv[a]);
      a++;
      if (a < argc)
	my_strcat(str, "\n");
    }
  return (str);
}
