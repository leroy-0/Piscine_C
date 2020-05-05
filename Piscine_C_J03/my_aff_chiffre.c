/*
** my_aff_chiffre.c for my_aff_chiffre in /home/leroy_0/rendu/Piscine_C_J03
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Sep 30 12:28:51 2015 maxime leroy
** Last update Wed Sep 30 22:02:24 2015 maxime leroy
*/
int	my_aff_chiffre(void)
{
  int  d;

  d = 48;
  while (d <= 57)
    {
      my_putchar(d);
      d++;
    }
}
