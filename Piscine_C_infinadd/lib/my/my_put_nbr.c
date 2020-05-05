/*
** my_putnbr.c for my_putnbr in /home/leroy_0/rendu/Piscine_C_J03
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Fri Oct  2 20:29:21 2015 maxime leroy
** Last update Wed Oct  7 17:31:17 2015 maxime leroy
*/

int	my_put_nbr(int nb)
{
  int   a;

  a = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
        {
          a = 1;
          nb++;
        }
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (a == 1)
    {
      a = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
