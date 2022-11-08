#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TZ_VALUE "<-03>3"

int main(int argc, char *argv[]) {

  time_t now;
  char strftime_buf[64];
  struct tm timeinfo;

  time(&now);
  setenv("TZ", TZ_VALUE, 1);
  tzset();

  localtime_r(&now, &timeinfo);
  strftime(strftime_buf, sizeof(strftime_buf), "%c", &timeinfo);
  printf("The current date/time in Sao_Paulo is: %s\n", strftime_buf);

  return EXIT_SUCCESS;
}
