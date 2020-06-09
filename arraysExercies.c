#include <stdio.h>

//leetcode
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //bruteforce solution.
    
    for(int i = 0; i<numsSize-1 ; i++ ){
        for (int j = i+1; j < numsSize; j++){
            if (nums[i]+nums[j]==target){
                returnSize =(int*)malloc(sizeof(int)*2);
                returnSize[0]=i;
                returnSize[1]=j;
                return returnSize;
            }
        }
        
    }
    
    return NULL;


}

int maxSubArray(int* nums, int numsSize){
    int max = nums[0], current = 0, val = 0, positiveFlag=0,maxNeg=nums[0];
    for(int i = 0; i < numsSize ; i++){
        val = nums[i];
        if(val>0){
            positiveFlag=1;
        }
        else{
            if (maxNeg<val){
                maxNeg=val;
            }
        }
        if(val + current < 0){
            if (current > max){
                max=current;
            }
            
            current = 0;
        }
        
        else{
            current = current + val;
            if(max<current){
                max = current;
            
            }
        }
        
    }
    if(positiveFlag){
        return max;
    }
    else{
        return maxNeg;
    }

}

void moveZeroes(int* nums, int numsSize){
    
    for(int i = 0; i < numsSize-1; i++)
        
        if(nums[i]==0){
            for(int j = i+1; j < numsSize; j++){
                if(nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    break;
                }
                if(j == numsSize){
                    return;     
                }
                
            
            }
            
        }

}