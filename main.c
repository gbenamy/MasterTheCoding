#include <stdio.h>
#define STRSIZE 256


void arrPrint(int arr[], int len){
  printf("arr:{");
  for (int i = 0 ; i < len ; i++){
    printf("%d, ",arr[i]);

  }
  printf("}\n");
}


int main() {


  int arr1[] = {0,3,4,34};
  int arr2[] = {3,4,6,30};
  
  char str[STRSIZE] = "abc";




  printf("Hello World2\n");
  printf("second attempt\n");
  printf("3rd attempt\n");
  
  printf("str is:%s\n",str);
  reverseAString(str);
  printf("reversed str is:%s\n",str);
  arrPrint(arr1,4);
  arrPrint(arr2,4);
  arrPrint(mergeSortedArrays(arr1,4,arr2,4),8);

  return 0;
}