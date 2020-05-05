/*
** my_putstr.c for my_putstr.c in /home/thover_j/rendu/test/Piscine_C_colles-Semaine_02
** 
** Made by Jérémy Thoveron
** Login   <thover_j@epitech.net>
** 
** Started on  Sat Oct 10 21:27:53 2015 Jérémy Thoveron
** Last update Sat Oct 10 21:29:04 2015 Jérémy Thoveron
*/

int	my_putstr(char *str)
{
  char	z;

  z = 0;
  while (str[z] != '\0')
    {
      my_putchar(str[z]);
      z = z + 1;
    }
}
