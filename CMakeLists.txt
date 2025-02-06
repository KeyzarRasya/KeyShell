cmake_minimum_required(VERSION 3.10)
project(keyshell)

set(SOURCE ../src/main.c)
set(SHELL ../src/includes/shell.c)

set(OUTPUT shell)

add_custom_command(
	OUTPUT ${OUTPUT}
	COMMAND gcc -o ${OUTPUT} ${SOURCE} ${SHELL} -g
	DEPENDS ${SOURCE}
	COMMENT "Building KeyShell"
)


add_custom_target(build_shell ALL DEPENDS ${OUTPUT})

add_custom_target(run
	COMMAND ./shell 
	DEPENDS build_shell
	COMMENT "Running the shell"
)
