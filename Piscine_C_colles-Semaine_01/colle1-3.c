/*
** colle1-3.c for colle1-3 in /home/leroy_0/rendu/Piscine_C_colles-Semaine_01
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Sat Oct  3 13:59:14 2015 maxime leroy
** Last update Sat Oct  3 21:53:24 2015 maxime leroy
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_param(int x, int y, int a, int o)
{
  if (x == 1 || y == 1)
    my_putchar('B');
  else if ((a == 0 || a == y - 1) && o != 0 && o != x - 1)
    my_putchar('B');
  else if ((o == 0 || o == x - 1) && a != 0 && a != y - 1)
    my_putchar('B');
  else if (a == 0)
    my_putchar('A');
  else if (a == y - 1)
    my_putchar('C');
  else
    my_putchar(' ');
}

int	colle(int x, int y)
{
  int a;
  int o;

  if (x == 0 || y == 0)
    my_putchar('\n');
  else
    {
      a = 0;
      while (a < y)
	{
	  o = 0;
	  while (o < x)
	    {
	      my_param(x, y, a, o);
	      ++o;
	    }
	  my_putchar('\n');
	  ++a;
	}
    }
}

int	main()
{
  colle(1, 4);
  return 0;
}
