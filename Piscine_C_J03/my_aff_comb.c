/*
** my_aff_comb.c for my_aff_comb in /home/leroy_0/rendu/Piscine_C_J03
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Sep 30 18:59:18 2015 maxime leroy
** Last update Wed Sep 30 18:59:20 2015 maxime leroy
*/

int   r(char a, char b, char c)
{
  if (a < b && a < c && b < c)
    {
      if (a < '7')
        {
          write(0, &a, 1);
          write(0, &b, 1);
          write(0, &c, 1);
          my_putchar(',');
          my_putchar(' ');
        }
      else
        {
          write(0, &a, 1);
          write(0, &b, 1);
          write(0, &c, 1);
	}
    }
}

int     my_aff_comb()
{
  char a;
  char b;
  char c;

  a = '0';
  b = '0';
  c = '0';
  while (a <= '9')
    {
      b = a + 1;
      while (b <= '9')
	{
	  c = b + 1;
	  while (c <= '9')
	    {
	      r(a, b, c);
	      c++;
	    }
	  b++;
	}
      a++;
    }
}
