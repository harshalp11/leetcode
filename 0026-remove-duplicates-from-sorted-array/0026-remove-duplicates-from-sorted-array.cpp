class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        int j = 1;
        int unique =1;
        while(j<n)
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else
            {
                unique++;
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        return unique;
    }
};
