#include "holberton.h"

/**
 * create_process - This function create a child process and executes
 * a specific program.
 * @av: Pointer to an array of strings with all arguments of input buffer
 * @count_exe: Executions counter
 * in each postiion.
 * Return: void
 **/
int create_process(char *av[], int count_exe, char **env)
{
	char *full_path = NULL, *full_file = NULL, error_msg[100];
	/*struct stat st;*/

	sprintf(error_msg, "%s: %d: %s: not found\n", av[0], count_exe, av[1]);
	full_path = _getenv("PATH", env);
	full_file = validate_file(full_path, av[1]);
	free(full_path);
	if ((execve(full_file, (av + 1), env)) == -1)
	{
		write(2, error_msg, strlen(error_msg));
		return (127);
	}
	return (0);
}
