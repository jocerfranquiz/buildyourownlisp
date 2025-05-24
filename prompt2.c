#include <stdio.h>
#include <stdlib.h>

// install editline with sudo apt-get install libedit-dev if error
#include <editline/readline.h>
#include <editline/history.h>



int main() {
  puts("lisp ver 0.1");
  puts("ctrl+c to exit\n");

  while(1) {

    // prompt output to get intput
    char* input = readline("$ ");

    // command history
    add_history(input);

    // echo to terminal
    printf("echo> %s\n", input);

    // free the input!!!
    free(input);
  }


  return 0;
}
