#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t) {
  // return wheter s is longer than t
  return strlen(s) - strlen(t) > 0;
}
int strlonger_fixed(char *s, char *t) {
  // return wheter s is longer than t
  return strlen(s) >strlen(t);
}
int main(){
  char str1[] = "Hello";
  char str2[] = "World!";

  if (strlonger(str1, str2)) {
    printf("%s is longer than %s\n", str1, str2);
  } else {
    printf("%s is not longer than %s\n", str1, str2);
  }

  if (strlonger_fixed(str1, str2)) {
    printf("%s is longer than %s\n", str1, str2);
  } else {
    printf("%s is not longer than %s\n", str1, str2);
  }

}
