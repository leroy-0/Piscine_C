/*
** colle2-1.c for colle2-1.c in /home/leroy_0/rendu/Piscine_C_colles-Semaine_02
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Sat Oct 10 13:49:43 2015 maxime leroy
** Last update Sat Oct 10 23:54:51 2015 maxime leroy
*/

#include <unistd.h>

int	my_right(char **argv, int line, int lenght)
{
  int	nbword;
  int	boucle;
  int	cpt;

  boucle = 0;
  while (argv[line][boucle] != '\0')
    {
      cpt = lenght - boucle;
      while (cpt != 1)
	{
	  my_putchar(' ');
	  cpt--;
	}
      nbword = 0;
      while (nbword <= boucle)
	{
	  my_putchar(argv[line][nbword]);
	  nbword = nbword + 1;
	}
      usleep(500000);
      my_putchar('\r');
      boucle++;
    }
}

int	my_clear(int lenght)
{
  int	a;

  a = 0;
  while (a < lenght)
    {
      my_putchar(' ');
      a++;
    }
  my_putchar('\r');
}

int	my_left(char **argv, int line, int lenght)
{
  int	nbword;
  int	boucle;
  int	cpt;

  boucle = 0;
  lenght = my_strlen(argv[line]);
  while (argv[line][boucle] != '\0')
    {
      cpt = lenght - boucle;
      nbword = 0;
      while (nbword <= boucle)
        {
          my_putchar(argv[line][lenght - boucle + nbword -1]);
          nbword = nbword + 1;
        }
      usleep(700000);
      my_putchar('\r');
      boucle++;
    }
}

int	main(int argc, char **argv)
{
  int	line;
  int	lenght;
  int	side;

  side = 1;
  line = 1;
  if (argc == 1)
    {
      my_putstr("./colle2-1: word1 [word2 [word3...]]\n");
      return (0);
    }
  while (1)
    {
      lenght = my_strlen(argv[line]);
      if (side % 2 == 1)
	my_left(argv, line, lenght);
      else
	my_right(argv, line, lenght);
      my_clear(lenght);
      line++;
      if (line >= argc)
	line = 1;
      side++;
    }
}
