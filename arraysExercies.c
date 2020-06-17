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





int containsDuplicate(int* nums, int numsSize){
    
 typedef struct tree_template{
     int val;
     struct tree_template * left;
     struct tree_template * right;
     
 }tree;
    
    tree * head = (tree*)malloc(sizeof(tree));
    head->right = NULL;
    head->left = NULL;
    head->val = nums[0];
    tree * runner= NULL;
    tree * prevRunner = NULL;
    

    
    for (int i = 1; i < numsSize; i++){
        int insertVal = nums[i];
        runner = head;
        while (runner){
            
            if(insertVal>(runner->val)){
                    prevRunner= runner;
                    runner = runner->right;
                
                
            }
            else {//insertVal smaller or equal
                if (insertVal == runner->val){//double
                    return 1;
        
                }
                prevRunner = runner;
                runner = runner->left;
                
            }
            
        }
        
        tree * temp = (tree*)malloc(sizeof(tree));
        temp->val = insertVal;
        temp->right = NULL;
        temp->left = NULL;
        
        if(insertVal > prevRunner->val){
            prevRunner->right = temp;
            
        }
        else{
            prevRunner->left = temp;
        }
        
        
            
            
        }
    return 0;
        
}




void rotate(int* nums, int numsSize, int k){

  //First Ver O(n) Space, simple solution
/*    
    int * newArr = (int*)malloc(sizeof(int)*numsSize);
    
    for(int i = 0; i< numsSize; i++){
        newArr[((i+k)%numsSize)]=nums[i];
    }
    
    for (int i = 0; i<numsSize; i++){
        nums[i]=newArr[i];
    }

Success
Details 
Runtime: 16 ms, faster than 41.64% of C online submissions for Rotate Array.
Memory Usage: 7.5 MB, less than 10.73% of C online submissions for Rotate Array.



    */


//O(1) Space solution

}

