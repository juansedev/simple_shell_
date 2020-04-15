# Simple shell
In this project we'll create a simple UNIX command interpreter in C programming language.

## Table of Contents
* [Introduction](#Introduction)
  * What is Shell
  * What is it for
* [Project Information](#Project-Information)
    * General requirements
    * Allowed functions
* [Documentation](#Documentation)
    * Description about what to do the code
    * Show flowchart
    * Explain functionalities
* [Extra Information](#Extra-Information)
  * How to download, install and compile the program from the repository
  * Authors
  
  ---
  
  
## Introduction
  
### What is Shell 
A **shell** is a command-line interpreter, it is the computer program that provides a user interface to access the services of the operating system. Depending on the type of interface they use, shells can be of various types, in this case, a shell program of the type **`sh`** ([Bourne Shell](https://en.wikipedia.org/wiki/Bourne_shell)) will be developed. Users typically interact with a shell using a [terminal emulator](https://en.wikipedia.org/wiki/Terminal_emulator) that is used for entering data into and displaying or printing data from, a computer or a computing system.

### What is it for
This consists of interpreting orders. It incorporates features such as process control, input/output redirection, law listing and reading, protection, communications, and a command language for writing batch programs or scripts. All Unix-type systems have at least one interpreter compatible with the Bourne shell. The Bourne shell program is found within the Unix file hierarchy at **`/bin/sh`**.



## Project Information

### General requirements
 * Allowed editors: vi, vim, emacs
 * All your files will be compiled on `Ubuntu 14.04 LTS`
 * Your C programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
 * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 * No more than 5 functions per file
 * All your header files should be include guarded
 * This shell should not have any memory leaks
 * Unless specified otherwise, your program must have the exact same output as `sh` (`/bin/sh`) as well as the exact same error output.

### Allowed functions
* `access` (man 2 access)
* `chdir` (man 2 chdir)
* `close` (man 2 close)
* `closedir` (man 3 closedir)
* `execve` (man 2 execve)
* `exit` (man 3 exit)
* `_exit` (man 2 _exit)
* `fflush` (man 3 fflush)
* `fork` (man 2 fork)
* `free` (man 3 free)
* `getcwd` (man 3 getcwd)
* `getline` (man 3 getline)
* `isatty` (man 3 isatty)
* `kill` (man 2 kill)
* `malloc` (man 3 malloc)
* `open` (man 2 open)
* `opendir` (man 3 opendir)
* `perror`(man 3 perror)
* `read` (man 2 read)
* `readdir` (man 3 readdir)
* `signal` (man 2 signal)
* `stat` (__ xstat) (man 2 stat)
* `lstat` (__ lxstat) (man 2 lstat)
* `fstat` (__ fxstat) (man 2 fstat)
* `strtok` (man 3 strtok)
* `wait` (man 2 wait)
* `waitpid` (man 2 waitpid)
* `wait3` (man 2 wait3)
* `wait4` (man 2 wait4)
* `write` (man 2 write)

## Documentation

### Download
You can clone this repository this way:
`git clone https://github.com/nathsotomayor/simple_shell.git`

### Compilation
Your shell will be compiled this way:

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

### Testing

Your shell should work like this in interactive mode:

`$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$`


Also in non-interactive mode:

`$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$`


## Extra information

### Resources

**Read or watch:**
* [Thompson shell](https://en.wikipedia.org/wiki/Thompson_shell)
* [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson)

**man or help:**
* `sh` (Run `sh` as well)


## Authors

* [Nathaly Sotomayor Ampudia](https://github.com/nathsotomayor/)
* [Juan Sebastián Llao](https://github.com/EckoJuan)
* [Camilo Moncada](https://github.com/moncada92)
