#include "shell.h"

/*!
 * Returning a pointer of struct shell
 */
struct shell *new_shell(){
	struct shell *sh = 
		(struct shell*)malloc(sizeof(struct shell));
	return sh;
}

/*!
 * Reading user input process
 * and handling exit command
 *
 * @param sh used struct shell
 */
void read_input(struct shell *sh){
	printf("KeyShell>");

	/* Reading input process */
	fflush(stdout);
	fgets(sh->input, MAX_INPUT, stdin);
	sh->input[strcspn(sh->input, "\n")] = 0;

	if (strcmp(sh->input, "exit") == 0){
		exit(1);
	} /* if user input is exit */
}

/*!
 * parsing user input and store
 * the parsed data into arrays of
 * arguments
 *
 * @param sh used struct shell
 */
void parse_input(struct shell *sh){
	int i = 0;

	char *token = strtok(sh->input, " "); /* separate the input using (space) delimiters */

	while (token != NULL) {
		sh->arguments[i] = token;
		token = strtok(NULL, " ");
		i++;
	} /* processing until token is equal to null */
	
	sh->arguments[i] = NULL; /* assigning NULL to the last index for execvp use */
}

/*!
 * executing the arguments and
 * create the child process using
 * fork()
 *
 * @param sh used struct shell
 */
void execute_command(struct shell *sh){

	pid_t child_process = fork();	/* creating the child process */

	if (child_process < 0) {
		perror("Failed to create child process");
		exit(EXIT_FAILURE);
	} /* if child process creation is failed */

	if (child_process == 0) {

		execvp(sh->arguments[0], sh->arguments);

		perror("Failed to execute command"); 	/* only executed if execvp failed */
		exit(EXIT_FAILURE);
	} /* if child process creation is success */
	else {
		int status;
		waitpid(child_process, &status, 0); /* waiting child_process to finish */
	} /* this is parent process */
}

/*
 * run function to repeat
 * all the process
 *
 * @params sh used struct shell
 */
void run(struct shell *sh){
	system("clear");
	while (1) {
		read_input(sh);
		parse_input(sh);
		execute_command(sh);
	} /* run forever until system call for exit */
}
