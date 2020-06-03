#include <stdio.h>
#include <string.h>
#define SIZE 256

void reverseAString(char str[]){

  
  //string check
  int len = strlen(str);
  //2 indexses for loop from each side
  //swap chars

  for (int start = 0, end = len-1; end>start; end--, start++){
    char temp = str[start];
    str[start]= str[end];
    str[end]= temp;  

  }
  printf("the len is: %d\n",len);

  printf("8\n");
}

