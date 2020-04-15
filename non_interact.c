#include "holberton.h"

/**
 * non_interact - This function get command line a through arguments of main.
 * @av: Pointer to strings with all arguments of input in each postiion.
 * Return: void.
 **/
void non_interact(char **av)
{
	char error_msg[100];

	sprintf(error_msg, "%s: 0: Can't open %s\n", av[0], av[1]);
	write(2, error_msg, strlen(error_msg));
}

