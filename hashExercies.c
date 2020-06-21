#include <stdio.h>
#define SIZE 256

//Google Question
//Given an array = [2,5,1,2,3,5,1,2,4]:
//It should return 2

//Given an array = [2,1,1,2,3,5,1,2,4]:
//It should return 1

//Given an array = [2,3,4,5]:
//It should return undefined


int firstRecurringCharacter(int arr[], int len) {
  int hash[256] = {0};
  for(int i = 0; i <len ; i++ ){
    if(hash[arr[i]]){
      return arr[i];
    }
    else{
      hash[arr[i]]++;
    }

  }

  return 0;

}


//Bonus... What if we had this:
// [2,5,5,2,3,5,1,2,4]
// return 5 because the pairs are before 2,2