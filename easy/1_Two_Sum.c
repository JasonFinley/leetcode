#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    (*returnSize) = 0;
    for( i = 0 ; i < numsSize ; i++ ){
        for( j = 0 ; j < numsSize ; j++){
            if( i == j )
                continue;
            if( nums[i] + nums[j] == target ){
                int* dd = malloc( 2 * sizeof(int));
                dd[0] = i;
                dd[1] = j;
                (*returnSize) = 2;
                return dd;
            }

        }
    }
    return NULL;
}

void main(){

    int arr[] = {3,3};
    int target = 6;
    int returnSize, i;
    int* sum;
    sum = twoSum( arr, sizeof(arr)/sizeof(arr[0]), target, &returnSize );
    for( i = 0 ; i < returnSize ; i++ ){
        printf( "%d ", sum[i] );
    }
    if( sum != NULL )
        free(sum);
}
