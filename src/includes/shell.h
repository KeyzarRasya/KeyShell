/*
 * @file shell.h
 * @brief this is main shell struct
 * @details
 * this is file headers for
 * initializing shell basic functions
 */

#include <stdlib.h>	/* malloc, exit, system */
#include <unistd.h>	/* fork, ecevp */
#include <sys/wait.h>	/* waitpid */
#include <stdio.h>	/* perror, fflush, fgets */
#include <string.h>	/* strcspn, strcmp, strtok */

#ifndef SHELL	/* header guards for SHELL */
#define SHELL	/* defining shell */

#define MAX_INPUT 1024	/* maximal length for input */
#define MAX_ARG 64	/* maximal array of arguments */

/*!
 * @struct shell
 * a struct for storing information
 * about input from users, and
 * arguments after input being parsed
 */
struct shell{
	char input[MAX_INPUT];		/* input from user */
	char *arguments[MAX_ARG];	/* parsed input */
};

struct shell *new_shell();		/* initializing new shell */
void read_input(struct shell *sh);	/* reading user input */
void parse_input(struct shell *sh);	/* parsing input into arguments */
void execute_command(struct shell *sh);	/* executing arguments */
void run(struct shell *sh);		/* a function to run all process */

#endif
