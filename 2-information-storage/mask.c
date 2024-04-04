#include <stdio.h>

int main(){
  unsigned int x = 0x87654321;
  unsigned int mask = 0xFF;

  // A. The least significant byte of x, with all other bits set to 0. [0x00000021].
  unsigned int ans_a = x & mask;

  // B. All but the least significant byte of x complemented, with the least significant 
  // byte left unchanged. [0x789ABC21].

  // compliment x
  unsigned int ans_b = ~x;
  // remove last bytes 
  ans_b = ans_b & (~mask);
  // add orignal last bytes;
  ans_b = ans_b | (x & mask);

  // C. The least significant byte set to all 1s,and all other bytes of x left unchanged.
  // [0x876543FF].
  unsigned int ans_c = x | mask;


  printf("ans_a = 0x%x\n", ans_a);
  printf("ans_b = 0x%x\n", ans_b);
  printf("ans_c = 0x%x\n", ans_c);

}
