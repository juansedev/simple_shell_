#include "holberton.h"
/**
 * interactive - This function get command line a through getline in the mode
 * interactive and non-interactive mode (echo / cat).
 * @av: Pointer to strings with the Name of the function executed
 * in the first position.
 * @count_exe: Count how many times you receive a command to execute.
 * @env: Enviroment variable.
 * Return: status_exit value.
 **/
int interactive(char *av[], int count_exe, char **env)
{
	int interactive = 1, status_process = 0, i = 0, read = 0;
	size_t len = 0;
	char *line = NULL, *args[32], *token = NULL;

	isatty(STDIN_FILENO) == 0 ? interactive = 0 : interactive;
	while (1)
	{
		interactive == 1 ? write(STDIN_FILENO, "#cisfun$ ", 9) : interactive;
		read = getline(&line, &len, stdin);
		if (read == EOF)
		{
			free(line), write(STDIN_FILENO, "\n", 1);
			return (status_process);
		}
		else if (_strncmp(line, "exit\n", 4) == 0)
		{
			free(line);
			return (status_process);
		}
		else
		{
			if (_strncmp(line, "env\n", 3) == 0)
				print_env(env);
			else if (read > 1)
			{
				token = strtok(line, " \t\n\r"), args[0] = av[0];
				for (i = 1; i < 32 && token != NULL; i++)
					args[i] = token, token = strtok(NULL, " \t\n\r");
				args[i] = NULL;
				if (args[1])
				{
					status_process = create_process(args, count_exe, env);
				}
			} count_exe++;
		}
	}
	return (status_process);
}
