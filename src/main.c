#include "includes/shell.h"

/*
 * main function to initialize
 * a new shell and run all the process
 */
int main(){
	struct shell *sh = new_shell();	/* initializing shell */
	run(sh);			/* run all the process */
	return 0;
}
