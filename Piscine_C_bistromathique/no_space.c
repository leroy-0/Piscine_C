/*
** nospace.c for nospace in /home/bontem_1/rendu/Piscine_C_bistromathique/lib
** 
** Made by loic bontemps
** Login   <bontem_1@epitech.net>
** 
** Started on  Wed Oct 28 14:46:42 2015 loic bontemps
** Last update Sun Nov  1 14:14:21 2015 maxime leroy
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "include/my.h"

int     check(char *str)
{
  int a;

  a = 0;
  while (str[a] != '\0')
    a++;
  a--;
  while (str[a] == ' ')
    a--;
  return (a);
}

char	*no_space(char *str)
{
  int a;
  int b;
  char *tmp;

  tmp = malloc(my_strlen(str) * sizeof(char));
  if (tmp == NULL)
    return (0);
  a = 0;
  b = 0;
  while (str[a] == ' ' || str[a] == '	')
    a++;
  while (str[a] != '\0')
    {
      if (str[a] != ' ' && str[a] != '	')
	{
	  tmp[b] = str[a];
	  a++;
	  b++;
	}
      else if (str[a] == ' ' || str[a] == '	')
        a++;
    }
  return (tmp);
}
