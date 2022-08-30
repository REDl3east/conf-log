#include "conf-log.h"

int main(int argc, char** argv) {
  trace("hello %s: %d", "Thomas", 62);
  debug("hello %s: %d", "Dalton", 26);
  info("hello %s: %d", "Dalton", 26);
  warn("hello %s: %d", "Dalton", 26);
  error("hello %s: %d", "Dalton", 26);
  fatal("hello %s: %d", "Dalton", 101);
  return 0;
}

// #include <stdio.h>
// #include <time.h>

// #define MAX_SIZE 24
// #define FORMAT   "%Y-%B-%d"

// #define test(fmt, args...) \
//   char buffer[MAX_SIZE]; \
//   time_t t = time(NULL); \
//   strftime(buffer, MAX_SIZE, FORMAT, localtime(&t)); \
//   printf(fmt " [%s]\n", ##args, buffer)

// int main() {
//   test("test: %d", 101);

//   // char buffer[MAX_SIZE];
//   // time_t t = time(NULL);
//   // strftime(buffer, MAX_SIZE, FORMAT, localtime(&t));
//   // printf("%s\n", buffer);

//   return (0);
// }