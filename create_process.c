#include "holberton.h"
/**
 * create_process - This function create a child process and executes
 * @av: Pointer to an array of strings with all arguments of input buffer
 * @count_exe: Executions counter in each postiion.
 * @env: Enviroment variable.
 * Return: void
 **/
int create_process(char *av[], int count_exe, char **env)
{
	char *path = NULL, *full_file = NULL, error_msg[100];
	int status = 0, found = 0, alloc = 0, exit_status = 0;
	pid_t child_pid;
	struct stat st;

	if (stat(av[1], &st) == 0)
		found = 1, full_file = av[1];
	else
	{
		path = _getenv("PATH", env), full_file = validate_file(path, av[1]);
		if (full_file != NULL)
			found = 1, alloc = 1;
		free(path);
	}
	if (found)
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			if ((execve(full_file, (av + 1), env)) == -1)
			{
				sprintf(error_msg, "%s: %d: %s: not found\n", av[0], count_exe, av[1]);
				write(2, error_msg, _strlen(error_msg));
				(alloc == 1) ? free(full_file) : (void) alloc;
			}
		}
		  waitpid(child_pid, &status, 0), (alloc == 1) ? free(full_file) : (void) alloc;
		if (WIFEXITED(status))
		{	
			exit_status = WEXITSTATUS(status); 
			return (exit_status);
		}
	} else
	{
		sprintf(error_msg, "%s: %d: %s: not found\n", av[0], count_exe, av[1]);
		write(2, error_msg, _strlen(error_msg));
		return (127);
	}
	return (0);
}
