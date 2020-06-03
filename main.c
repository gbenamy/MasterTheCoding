#include <stdio.h>
#define STRSIZE 256


int main() {
  
  char str[STRSIZE] = "abc";




  printf("Hello World2\n");
  printf("second attempt\n");
  printf("3rd attempt\n");
  
  printf("str is:%s\n",str);
  reverseAString(str);
  printf("reversed str is:%s\n",str);

  return 0;
}