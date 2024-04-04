#include <stdio.h>
float sum_elements(float a[], unsigned length){
  int i; 
  float result = 0; 
  for (int i = 0; i <= length - 1; i++){
    result += a[i];
  }
  return result;
}

int main(){
  float a[5] = {1,2,3,4,5};
  float sum = sum_elements(a, 0);
  printf("%f", sum);
  return 0;
}
