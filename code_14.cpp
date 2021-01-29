class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int i = nums.size()-1;
        
        // Find number which is to left of the current number and smaller than it
        while(i > 0 and nums[i] <= nums[i-1])
            i--;
        
        // If no such number then entire array is in descending order
        if(i == 0)
            reverse(nums.begin(), nums.end());
        
        else
        {
            i--; // To get the correct position of the smaller number to the left
            
            int j = nums.size()-1; 
            
            // Find the next largest number than the number at ith position and swap both of them
            while(nums[j] <= nums[i]) 
                j--;
            
            swap(nums[i], nums[j]);
            
            reverse(nums.begin()+i+1, nums.end());
        }
        
    }
};

