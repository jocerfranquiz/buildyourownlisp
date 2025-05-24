# include <stdio.h>

static char input[2048]; // prompt buffer

int main() {
  puts("lisp ver 0.1");
  puts("ctrl+c to exit");

  while(1) {

    fputs("$> ", stdout); // prompt output
    
    if (fgets(input, 2048, stdin) == NULL) {// prompt input up to 2048 bytes
      if (feof(stdin)) {
        fprintf(stderr, "Error: Unexpected end of input (EOF reached)\n");
      } else {
        perror("Error reading input");
      }
      return 1;
    }

    printf("echo %s", input);

  }

  return 0;
}
