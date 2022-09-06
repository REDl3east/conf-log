#include "conf-log-conf.h"

int main(int argc, char** argv) {
  trace("This is a %s log: %d", "trace", 1);
  debug("This is a %s log: %d", "debug", 2);
  info("This is a %s log:  %d", "info", 3);
  warn("This is a %s log:  %d", "warn", 4);
  error("This is a %s log: %d", "error", 5);
  fatal("This is a %s log: %d", "fatal", 6);
  return 0;
}
