#include <stdio.h>

int main(){ 
  float a = (1e20 + -1e20) + 3.14;
  float b = 1e20 +( -1e20 + 3.14);
  printf("%f \n", a);
  printf("%f", b);
}
