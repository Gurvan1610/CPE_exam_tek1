/*
** sopipa.c for sopipa in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Thu May 19 08:17:57 2016 Exam User
** Last update Thu May 19 09:02:56 2016 Exam User
*/

#include <unistd.h>
#include <fcntl.h>

int main(int ac, char **av)
{
  int pipefd[2];
  int in;
  int out;
  pid_t pid;

  in = open(av[1], O_RDONLY);
  out = creat(av[4], S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
  dup2(in, 0);
  pipe(pipefd);
  if ((pid = fork()) == 0)
    {
      close(pipefd[0]);
      dup2(pipefd[1], 1);
      execlp("/bin/sh", "/bin/sh", "-c", av[2], NULL);
    }
  else
    {
      close(pipefd[1]);
      dup2(pipefd[0], 0);
      dup2(out, 1);
      execlp("/bin/sh", "/bin/sh", "-c", av[3], NULL);
    }
  return (0);
}