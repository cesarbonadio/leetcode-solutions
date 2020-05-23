/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    
    int *twoS;
	twoS = (int *)malloc(2*sizeof(int));
    
    for (int i = 0;  i < numsSize; i++){
        for (int j = i+1; j<numsSize;j++){
            if (nums[j]+nums[i] == target){
                twoS[0] = j;
                twoS[1] = i;
            }
        }
    }
    
    return twoS;
    
}