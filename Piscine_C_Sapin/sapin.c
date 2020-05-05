/*
** Piscine_C_Sapin.c for sapin in /home/leroy_0/rendu/Piscine_C_Sapin
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Sun Oct  4 13:02:44 2015 maxime leroy
** Last update Sun Oct  4 18:17:08 2015 maxime leroy
*/

int     my_param(int taille)
{
  int a;
  int count;
  int shift;
  int temp;

  a = 1;
  count = 0;
  shift = 0;
  temp = taille;
  while (a < temp)
    {
      count = count + shift;
      if ((a % 2) == 0)
          shift = shift + 1;
      a = a + 1;
    }
  return (count + shift + (taille * 3));
}

void    my_display(int space, int star)
{
  int a;

  a = 0;
  while (a < space)
    {
      my_putchar(' ');
      a = a + 1;
    }
  a = 0;
  while (a < star)
    {
      my_putchar('*');
      a = a + 1;
    }
  my_putchar('\n');
}

void    my_pattern(int taille, int space, int star, int line)
{
  int a;
  int j;
  int tmp;

  a = 0;
  tmp = 2;
  while (a < taille)
    {
      j = 1;
      my_display(space, star);
      while (j < line)
        {
          star = star + 2;
          space = space - 1;
          my_display(space, star);
          j = j + 1;
        }
      line = line + 1;
      if (a % 2 == 0 && a > 1)
          tmp = tmp + 2;
      space = space + (tmp / 2);
      star = star - tmp;
      a = a + 1;
    }
}

int    my_trunk(int taille, int i, int tmp)
{
  int space;
  int j;

  tmp = (taille / 2) * 2 + 1;
  space = my_param(taille) - (taille / 2);
  while (i < space)
    {
      my_putchar(' ');
      i = i + 1;
    }
  i = 0;
  while (i <= tmp)
    {
      my_putchar('|');
      i++;
      while (i == tmp)
	{
	  my_putchar('\n');
	  i = i + 1;
	}
    }
  return (0);
}

void    sapin(int taille)
{
  int star;
  int line;
  int space;
  int i;
  int tmp;

  i = 0;
  line = 4;
  star = 1;
  if (taille <= 0)
      write(1, "The argument must be positive. \n", 32);
  else
    {
      space = my_param(taille);
      my_pattern(taille, space, star, line);
      while (star - 1 < taille)
	{
	  my_trunk(taille, i, tmp);
	  star++;
	}
    }
}
