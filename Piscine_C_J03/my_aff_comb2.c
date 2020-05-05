/*
** my_aff_comb2.c for my_aff_comb2 in /home/leroy_0/rendu/JOUR_03
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Sep 30 18:57:00 2015 maxime leroy
** Last update Wed Sep 30 20:17:28 2015 maxime leroy
*/

int   r(char a, char b, char c, char d)
{
  if (a + b < c + d)
    {
      if (a < '9' || b < '8' || c < '9' || d < '9')
	{
	  write(0, &a, 1);
	  write(0, &b, 1);
	  my_putchar(' ');
	  write(0, &c, 1);
	  write(0, &d, 1);
	  my_putchar(',');
	  my_putchar(' ');
	}
      else
        {
	  write(0, &a, 1);
	  write(0, &b, 1);
	  my_putchar(' ');
	  write(0, &c, 1);
	  write(0, &d, 1);
	}
    }
}

int     whi(char a, char b, char c, char d)
{
  while (b <= '9')
    {
      while (c <= '9')
	{
	  while (d <= '9')
	    {
	      r(a, b ,c ,d);
              d++;
            }
         d = '0';
         c++;
        }
     c = '0';
     b++;
    }
}

int    my_aff_comb2()
{
  char a;
  char b;
  char c;
  char d;

  a = '0';
  b = '0';
  c = '0';
  d = '0';
  while (a <= '9')
    {
      whi(a, b, c, d);
      b = '0';
      a++;
    }
}

