int removeDuplicates(int* nums, int numsSize) {
    if(numsSize  == 1) return 1;
    int j = 0;
    int arr[numsSize];
    int code = 0;
     for(int i=0;i<numsSize-1;i++)
    {
        
        if(nums[i]==nums[i+1])
        {
            if(code == 0)
            {
                arr[j++] = nums[i];
                 code = 1;
            }
            
        }
        else
        {

            if(code == 0)
            {
                arr[j++] = nums[i];
                 code = 1;
            }
            code = 0;
        }
    }
    if(nums[numsSize - 1] != nums[numsSize - 2] )
        {
            arr[j++] = nums[numsSize - 1];
        
        } 
  

    for(int i = 0 ; i < numsSize ; i++)
    {
            nums[i] = arr[i];   
    }
    return j;

    
}