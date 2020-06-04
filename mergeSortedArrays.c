#include <stdio.h>
#include <stdlib.h>
//mergeSortedArrays([0,3,4,31], [3,4,6,30]);

int * mergeSortedArrays(int arr1[], int len1, int arr2[] , int len2){
  //TODO input check empty array, not an array.
  int * retArr = (int*)malloc(sizeof(int)*(len1+len2));

  int arr1Index = 0 , arr2Index = 0, retIndex=0;

  for (;retIndex < (len1 +len2); retIndex++){
    if(arr1Index > len1 - 1){//At the end of arr1, copy arr2
      retArr[retIndex]=arr2[arr2Index];
      arr2Index++;
      continue;
    }

    if(arr2Index>len2 - 1){//at the end of arr2 copy arr1
      retArr[retIndex] = arr1[arr1Index];
      arr1Index++;
      continue;

    }

    if (arr1[arr1Index]<arr2[arr2Index]){
      retArr[retIndex]=arr1[arr1Index];
      arr1Index++;
      

    }
    else{ //arr2[arr2Index]<arr1[arr1Index]
      retArr[retIndex]=arr2[arr2Index];
      arr2Index++;
    }


  }





return retArr;
}