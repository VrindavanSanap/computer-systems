#include <stdio.h>

int bis(int x, int m){
  // set 1 where m == 1
  return x | m; 
};
int bic(int x, int m){
  // set 0 where m == 1
  return x & (~m);
};

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y) { 
  int result = bis(x, y); 
  return result;
}
/* Compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y) { 
  int result = bis(bic(x, y), bic(y, x)); 
  return result;
}

int main(){
  unsigned int a = 0x89;
  unsigned int b = 0x23;
  printf("or: 0x%x \n", bool_or(a, b));
  printf("xor: 0x%x \n", bool_xor(a, b));


  printf("my or: 0x%x \n", bool_or(a, b));
  printf("my xor: 0x%x \n", bool_xor(a, b));

}
