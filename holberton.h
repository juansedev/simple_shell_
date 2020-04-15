#ifndef HOLBERTON_H
#define HOLBERTON_H
#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

/* Shell functions shell_functions.c*/
	void non_interact(char **av);
	int interactive(char *av[], int count_exe, char **env);
	int create_process(char *av[], int count_exe, char **env);
	char *_getenv(char *name, char **env);
	void print_env(char **env);

/* funcions search_path path_fuctions.c*/
	char *validate_file(char *full_path, char *file);


	/* Str functions  str_functions.c*/
	char *_strcpy(char *dest, char *src);
	int _strlen(const char *s);
	char *_strcat(char *dest, char *src);
	char *_strdup(char *str);

	/* Str functions  strcmp_functions.c*/
	int _strcmp(char *s1, char *s2);
	int _strncmp(const char *s1, const char *s2, size_t n);

	/* Memory allocate functions */
	char *_memset(char *s, char b, unsigned int n);
	void *_calloc(unsigned int nmemb, int size);
	unsigned int lenght_array(char **p);

#endif
