#include "holberton.h"
/**
 * child_process - This function create a process
 * @args: All arguments that need execve
 * @count_exe: Executions counter
 * Return: Error value of execution
 **/
int child_process(char **args, int count_exe, char **env)
{
	int r_process = 0, status = 0;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid < 0)
	{
		perror("fork->");
		return (1);
	}
	if (child_pid == 0)
		r_process = create_process(args, count_exe, env);
	if (child_pid > 0)
		wait(&status);
	return (r_process);
}
