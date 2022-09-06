#include "conf-log-conf.h"

int main(int argc, char** argv) {
  trace("hello %s: %d", "Thomas", 62);
  debug("hello %s: %d", "Dalton", 26);
  info("hello %s: %d", "Dalton", 26);
  warn("hello %s: %d", "Dalton", 26);
  error("hello %s: %d", "Dalton", 26);
  fatal("hello %s: %d", "Dalton", 101);
  return 0;
}
