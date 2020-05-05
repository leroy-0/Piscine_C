/*
** my_strlen.c for my_strlen in /home/thover_j/rendu/test/Piscine_C_colles-Semaine_02
** 
** Made by Jérémy Thoveron
** Login   <thover_j@epitech.net>
** 
** Started on  Sat Oct 10 21:23:07 2015 Jérémy Thoveron
** Last update Sat Oct 10 21:24:49 2015 Jérémy Thoveron
*/

int	my_strlen(char *str)
{
  int	word;

  word = 0;
  while (str[word] != '\0')
    {
      word = word + 1;
    }
  return (word);
}
