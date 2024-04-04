#include <stdio.h>
#include <string.h>
#define KSIZE 1024
char kbuf[KSIZE];
/* Copy at most maxlen bytes from kernel region to user buffer */
int copy_from_kernel(void *user_dest, int maxlen) {
  /* Byte count len is minimum of buffer size and maxlen */
  int len = KSIZE < maxlen ? KSIZE : maxlen;
  memcpy(user_dest, kbuf, len);
  return len;
}

int main() {
  char source[] = "Hello, world!";
  int len = copy_from_kernel(source, strlen(source));
  printf("%s %d", kbuf, len);
}
