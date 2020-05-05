/*
** my_putnbr.c for my_putnbr in /home/leroy_0/rendu/Piscine_C_J03
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Fri Oct  2 20:29:21 2015 maxime leroy
** Last update Sun Oct 25 02:26:33 2015 maxime leroy
*/

int	my_put_nbr(int nb)
{
  int   a;

  a = 0;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  else if (nb >= 0)
    {
      if (nb >= 10)
	{
	  a = (nb % 10);
	  nb = (nb - a) / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + a);
	}
      else
	my_putchar(48 + nb % 10);
    }
}
